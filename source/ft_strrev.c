/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 21:01:22 by klescaud          #+#    #+#             */
/*   Updated: 2015/02/04 21:40:13 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*tmp;
	int		i;

	if (s == NULL)
		return (NULL);
	if ((tmp = malloc(sizeof(char) * (int)ft_strlen(s) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		tmp[i] = s[(int)ft_strlen(s) - i];
		i++;
	}
	tmp[i] = '\0';
	ft_strcpy(s, tmp);
	free(tmp);
	return (s);
}
