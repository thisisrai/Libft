/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:09:36 by ralee             #+#    #+#             */
/*   Updated: 2017/12/12 15:22:28 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	counter;

	counter = 0;
	str = malloc(size + 1);
	if (str != 0)
	{
		while (counter < size)
		{
			str[counter] = '\0';
			counter++;
		}
		str[counter] = '\0';
		return (str);
	}
	else
		return (0);
}
