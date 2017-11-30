/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:34 by ralee             #+#    #+#             */
/*   Updated: 2017/11/30 15:48:33 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	counter;

	counter = 0;
	dest = (char*)dst;
	srce = (char*)src;
	if (n == 0)
		return (dst);
	while (*srce != '\0' && counter < n)
	{
		*dest = *srce;
		dest++;
		srce++;
		counter++;
	}
	return (dst);
}
