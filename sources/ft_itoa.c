/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 14:48:36 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/25 11:50:57 by klescaud         ###   ########.fr       */
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

#include <stdio.h>

char*		ft_itoa(int n)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	ft_putendl("Lest int used.");
	while (n != 0)
	{
		str = ft_stradd(str, ft_mini_itoa(ft_last_int(&n)));
		printf("Le nombre vaut %d.\n", n);
	}
	str = ft_strrev(str);
	return (str);
}
