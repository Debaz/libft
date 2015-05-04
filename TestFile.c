/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/04 18:38:15 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/04 18:49:51 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h> // Pour Printf

int		main(void)
{
	char *teststr = "Ceci est une phrase de test.";
	char *test2;

	printf("La phrase est longue de %d caracteres.", (int)ft_strlen(teststr));
	test2 = ft_strdup(teststr);
	ft_putstr(test2);
	return (0);
}
