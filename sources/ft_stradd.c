/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 14:48:57 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/19 15:17:25 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_stradd(char *s1, char s2)
{
  char *str;
  int	i;

  i = 0;
  str = malloc(sizeof(char) * (ft_strlen(s1) + 2));
  while (i <= (int)ft_strlen(s1))
	{
	  str[i] = s1[i];
	  i++;
	}
  str[i] = s2;
  i++;
  str[i] = '\0';
  return (str);
}
