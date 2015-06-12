/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/12 15:37:25 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/12 15:42:04 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(const char *s)
{
	size_t	len;
	char	*s_trim;

	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (len > 0 
		   && (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len --;
	s_trim = (char *)malloc((len + 1) * sizeof(*s_trim));
	ft_strncpy(s_trim, s, len);
	s_trim[len] = '\0';
	return (s_trim);
}
