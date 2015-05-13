/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 18:40:58 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/13 18:44:31 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_isaplha(int c)
{
	if (((c < 91) && (c > 64)) 
		|| ((c < 123) && (c > 96)))
		return (1);
	else
		return (0);
}
