/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 18:23:16 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/26 12:11:55 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("L'argument vaut %d.\n", ft_atoi(av[1]));
	}
	return (0);
}
