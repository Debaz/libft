/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 14:48:46 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/19 14:48:47 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrev(char *s)
{
  int	i;
  char	c;

  c = '0';
  i = 0;
  while (i <= ((int)ft_strlen(s) / 2))
	{
	  c = s[i];
	  s[i] = s[ft_strlen(s) - (i + 1)];
	  s[ft_strlen(s) - (i + 1)] = c;
	  i++;
	}
  return (s);
}
