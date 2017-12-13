/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:07:10 by ralee             #+#    #+#             */
/*   Updated: 2017/12/05 12:29:55 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	unsigned char	c2;
	size_t			counter;

	dest = (unsigned char*)dst;
	srce = (unsigned char*)src;
	c2 = (unsigned char)c;
	counter = 0;
	while (counter < n && *srce != c2)
	{
		*dest = *srce;
		dest++;
		srce++;
		counter++;
	}
	if (*srce == c2)
	{
		*dest = *srce;
		dest++;
		return (dest);
	}
	return (0);
}
