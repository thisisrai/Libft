/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:56:45 by ralee             #+#    #+#             */
/*   Updated: 2017/12/14 15:08:25 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;
	char	*str;

	str = (char*)s;
	counter = 0;
	if (n != 0)
	{
		while (counter < n)
		{
			str[counter] = 0;
			counter++;
		}
	}
}
