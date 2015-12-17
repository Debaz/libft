/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:18:46 by klescaud          #+#    #+#             */
/*   Updated: 2015/12/17 11:24:50 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_elem;
	t_list	*prev_elem;
	t_list	*begin;
	t_list	*tmp;

	new_elem = NULL;
	prev_elem = NULL;
	begin = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!(new_elem = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new_elem->next = NULL;
		if (prev_elem)
			prev_elem->next = new_elem;
		lst = lst->next;
		prev_elem = new_elem;
		if (begin == NULL)
			begin = new_elem;
	}
	return (begin);
}
