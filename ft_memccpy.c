/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:07:10 by ralee             #+#    #+#             */
/*   Updated: 2017/12/16 15:59:41 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			counter;
	unsigned char	*source;
	unsigned char	*destination;

	counter = 0;
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	while (counter < size)
	{
		destination[counter] = source[counter];
		if (source[counter] == (unsigned char)c)
			return (destination + counter + 1);
		counter++;
	}
	return (0);
}
