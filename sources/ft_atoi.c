/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 11:43:04 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/26 12:13:04 by klescaud         ###   ########.fr       */
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

	i = ft_strlen(str);
	temp = ft_strrev(ft_strdup(str));
	ft_putendl("ALERTE !");
	while (i >= 0)
	{
		if (i == 0 && temp[i] == '-')
		{
			res = -res;
			break;
		}
		res = res + ft_ten_pow(ft_mini_atoi(temp[i]), i);
		i--;
	}
	return (res);
}
