/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 02:37:43 by klescaud          #+#    #+#             */
/*   Updated: 2015/06/02 13:49:31 by klescaud         ###   ########.fr       */
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
char	*ft_strrev(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_last_int(int *x);
char	*ft_stradd(char *s1, char s2);
char	*ft_itoa(int n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
int		ft_ten_pow(int nb, int pow);
int		ft_atoi(char const *str);
char	ft_mini_itoa(int x);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strsplit(const char *s, char c);
int		ft_count_words(const char *s, char c);

#endif
