/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 18:23:16 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/02 14:07:40 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putendl(ft_itoa(ft_count_words(av[1], ' ')));
	return (0);
}
