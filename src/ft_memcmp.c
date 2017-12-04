/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:53:04 by ralee             #+#    #+#             */
/*   Updated: 2017/12/04 13:34:58 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*converted_s1;
	unsigned char	*converted_s2;
	size_t			stopper;

	converted_s1 = (unsigned char*)s1;
	converted_s2 = (unsigned char*)s2;
	stopper = 0;
	while (converted_s1[stopper] == converted_s2[stopper] && stopper < n - 1)
	{
		stopper++;
	}
	return (converted_s1[stopper] - converted_s2[stopper]);
}	