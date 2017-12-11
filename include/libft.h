/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:46:51 by ralee             #+#    #+#             */
/*   Updated: 2017/12/11 15:49:32 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
char	*ft_strcpy(char *dest, char *src);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_memdel(void **ap);
void	ft_striter(char *s, void (*f)(char *));
void	ft_putchar(char c);
void	ft_putstr(char const *s);

#endif
