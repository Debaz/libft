/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/26 11:43:04 by klescaud          #+#    #+#             */
/*   Updated: 2015/10/19 11:27:41 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_mini_atoi(char c)
{
	return (c - '0');
}

static char		*ft_strverif(char *str)
{
	int		i;

	i = 0;
	str = ft_strtrim(str);
	if (str[0] != '+' && str[0] != '-' && !ft_isdigit(str[0]))
		return (NULL);
	i++;
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	str[i] = '\0';
	return (str);
}

int				ft_atoi(const char *str)
{
	char	*tmp;
	int		res;
	int		i;

	res = 0;
	i = 0;
	if ((tmp = ft_strverif((char *)str)) == NULL)
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		res *= 10;
		res = res + ft_mini_atoi(str[i]);
	}
	if (str[0] == '-')
		return (-res);
	return (res);
}
