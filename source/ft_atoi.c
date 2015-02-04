/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 03:40:26 by klescaud          #+#    #+#             */
/*   Updated: 2015/01/26 03:50:10 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tenpow(int nb, int pow)
{
	int		power;

	power = 1;
	while (pow)
	{
		power = power * 10;
		pow--;
	}
	return (nb*power);
}

int		ft_atoi(const char *str)
{
	int		i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	
}
