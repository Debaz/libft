/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 16:00:16 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/12 16:07:11 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*tmp_d;
	const char	*tmp_s;

	i = 0;
	tmp_d = (char *)dst;
	tmp_s = (char *)src;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		if (tmp_s[i] == c)
			return (&(tmp_d[i + 1]));
		i++;
	}
	return (dst);
}
