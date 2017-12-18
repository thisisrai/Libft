/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:34 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 15:26:17 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	counter;

	counter = 0;
	dest = (char*)dst;
	srce = (char*)src;
	while (counter < n)
	{
		*dest = *srce;
		dest++;
		srce++;
		counter++;
	}
	return (dst);
}
