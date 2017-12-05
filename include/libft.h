/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:46:51 by ralee             #+#    #+#             */
/*   Updated: 2017/12/04 17:06:31 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
char	*ft_strcpy(char *dest, char *src);

#endif
