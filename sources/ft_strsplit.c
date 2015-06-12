/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 17:19:55 by Debaz             #+#    #+#             */
/*   Updated: 2015/06/04 14:07:52 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_tablen(char **tab)
{
	size_t	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

char	**ft_tabadd(char **tab, char *str)
{
	char	**temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(char *) * ft_tablen(tab) + 2);
	while (tab[i])
	{
		ft_putendl("ALERTE !");
		temp[i] = ft_strdup(tab[i]);
		i++;
	}
	temp[i] = ft_strdup(str);
	temp[i + 1] = ft_strnew(0);
	return (temp);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	char	*word;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *));
	tab[0] = ft_strnew(0);
	word = ft_strnew(0);
	while (s[i])
	{
		if (s[i] == c && (word[0] != '\0'))
		{
			tab = ft_tabadd(tab, word);
			free(word);
			word = ft_strnew(0);
		}
		else if (s[i] != c)
		{
			word = ft_stradd(word, s[i]);
		}
		i++;
	}
	if (word[0] != '\0')
		tab = ft_tabadd(tab, word);
	return (tab);
}

