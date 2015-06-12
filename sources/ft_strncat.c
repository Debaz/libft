/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 16:25:57 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/12 16:28:01 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i])
	{
		dest[len + 1] = src[i];
		i++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
