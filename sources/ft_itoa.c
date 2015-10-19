/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 14:48:36 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/19 14:19:00 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_nbrlen(int n)
{
	int		nb;

	nb = 0;
	while (n > 10)
	{
		n /= 10;
		nb++;
	}
	return (nb + 1);
}

char		*ft_itoa_base(int n, int *i, char *s, char *res)
{
	int tmp;

	tmp = n;
	while (tmp / 10 > 10)
		tmp /= 10;
	res[i] = s[tmp % 10];
	ft_itoa_base()
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		nbrlen;
	int		i;
	int		neg;

	neg = (n < 0) ? 1 : 0;
	nbrlen = ft_nbrlen(n);
	if ((res = malloc(sizeof(char) * (nbrlen + neg + 1))) == NULL)
		return (NULL);
	res[0] = (neg) ? '-' : 0;
	i = (neg) ? 1 : 0;
	ft_itoa_base(n, &i, "0123456789", res);
	return (res);
}
