/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:07:31 by klescaud          #+#    #+#             */
/*   Updated: 2015/12/17 11:09:44 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst)
	{
		while ((*alst) != NULL)
		{
			del((*alst)->content, (*alst)->content_size);
			tmp = *alst;
			free(*alst);
			*alst = tmp->next;
		}
		*alst = NULL;
	}
}
