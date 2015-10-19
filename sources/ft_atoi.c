/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 11:43:04 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/19 09:40:33 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_mini_atoi(char c)
{
	int		res;

	res = c - 48;
	return (res);
}

int		ft_atoi(const char *str)
{
	char	*temp;
	int		res;
	int		i;
	int		negate;

	negate = 0;
	res = 0;
	i = ft_strlen(str) - 1;
	temp = ft_strrev(ft_strdup(str));
	while (i >= 0)
	{
		if (temp[i] == '-')
		{
			negate = 1;
			i--;
		}
		res = res + ft_ten_pow(ft_mini_atoi(temp[i]), i);
		i--;
	}
	if (negate == 1)
		res = -res;
	return (res);
}
