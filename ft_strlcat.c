/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:59:20 by ralee             #+#    #+#             */
/*   Updated: 2017/12/22 13:41:52 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	end;

	counter = 0;
	end = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[counter] && counter < dstsize)
		counter++;
	end = counter;
	while (src[counter - end] && counter < dstsize - 1)
	{
		dst[counter] = src[counter - end];
		counter++;
	}
	if (counter < dstsize)
		dst[counter] = '\0';
	return (end + ft_strlen(src));
}
