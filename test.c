/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 18:23:16 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/13 19:09:10 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		main(int ac, char **av)
{
  if (ac == 3)
	ft_putendl(ft_strjoin(av[1], av[2]));
  return (0);
}
