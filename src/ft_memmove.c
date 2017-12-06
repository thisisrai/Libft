/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:26:53 by ralee             #+#    #+#             */
/*   Updated: 2017/12/06 12:51:59 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;
	char	*dest;
	char	*source;

	counter = 0;
	dest = (char*)dst;
	source = (char*)src;
	if (dest < source)
	{
		while (counter < len)
		{
			dest[counter] = source[counter];
			counter++;
		}
	}
	else
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	return (dst);
}
