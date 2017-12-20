/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:59:20 by ralee             #+#    #+#             */
/*   Updated: 2017/12/20 11:52:45 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	end;

	counter = 0;
	end = 0;
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
