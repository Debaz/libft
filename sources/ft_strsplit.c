/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 13:44:40 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/02 14:33:50 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		*ft_info_words(const char *s, char c)
{
	int		*tab;
	int		temp_len;
	int		i;
	int		j;

	temp_len = 0;
	i = 1;
	j = 0;
	tab = malloc(sizeof(int) * ft_count_words(s, c) + 1);
	tab[0] = ft_count_words(s, c);
	while (i <= tab[0])
	{
		
	}
}

int		ft_count_words(const char *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strplit(const char *s, char c)
{
	c = s[0];
	return (NULL);
}
