/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 02:37:43 by klescaud          #+#    #+#             */
/*   Updated: 2015/05/13 18:55:57 by klescaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> /* for write() */
# include <string.h> /* for size_t type */
# include <stdlib.h> /* for malloc() & free() */

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(const char *s);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl(const char *s);
void	ft_putendl_fd(const char *s, int fd);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
