/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:16:46 by ralee             #+#    #+#             */
/*   Updated: 2017/12/12 14:20:23 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		index;

	index = 0;
	if (s)
	{
		while (s[index])
		{
			ft_putchar_fd(s[index], fd);
			index++;
		}
	}
}
