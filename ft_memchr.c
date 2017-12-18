/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 10:39:37 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 13:44:27 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char*)s;
	c2 = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (*s2 == c2)
			return ((unsigned char*)s);
		s++;
		s2++;
		index++;
	}
	return (0);
}
