/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 03:40:26 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/04 18:45:18 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_tenpow(int nbr, int pow)
{
	while (pow != 0)
	{
		nbr = nbr * 10;
		pow--;
	}
	return (nbr);
}

int				ft_atoi(const char *str)
{
	char	*tmp;
	int		res;
	int		i;

	if (str == NULL)
		return (0);
	tmp = ft_strdup(str);
	tmp = ft_strrev(tmp);
	i = 0;
	res = 0;
	while (i < (int)ft_strlen(tmp))
	{
		if (tmp[i] == '-' && ((i+1) == (int)ft_strlen(tmp)))
			res = -res;
		res = res + ft_tenpow((tmp[i] - 48), i);
		i++;
	}
	return (res);
}
