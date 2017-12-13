/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:46:49 by ralee             #+#    #+#             */
/*   Updated: 2017/12/05 12:20:07 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*str;

	counter = 0;
	str = (char*)b;
	while (counter < len)
	{
		str[counter] = (char)c;
		counter++;
	}
	return (b);
}
