/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Debaz <klescaud@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 23:53:33 by Debaz             #+#    #+#             */
/*   Updated: 2015/12/17 00:19:32 by Debaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*elem;

	if (!(elem = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!(elem->content = ft_memalloc(sizeof(content_size))))
	{
		free(elem);
		return (NULL);
	}
	if (content)
		ft_memcpy(elem->content, content, content_size);
	elem->content_size = content ? content_size : 0;
	elem->next = NULL;
	return (elem);
}
