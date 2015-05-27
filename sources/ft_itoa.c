/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 14:48:36 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/27 13:29:04 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		ft_mini_itoa(int x)
{
	char	res;
	
	if ((x >= 0) && (x <= 9))
		res = 48 + (x % 10);
	else
		res = '\0';
	return (res);
}

int			ft_last_int(int *x)
{
	int		res;
	int		tmp;

	res = *x % 10;
	tmp = *x / 10;
	*x = tmp;
	return (res);
}

char*		ft_itoa(int n)
{
	char	*str;
	int		negate;

	negate = 0;
	if (n < 0)
	{
		n = -n;
		negate = 1;
	}
	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	while (n != 0)
		str = ft_stradd(str, ft_mini_itoa(ft_last_int(&n)));
	if (negate == 1)
		str = ft_stradd(str, '-');
	str = ft_strrev(str);
	return (str);
}
