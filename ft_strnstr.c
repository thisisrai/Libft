/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 12:38:33 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 14:21:35 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int		firstif(size_t *counter,
const char **placeholder, const char **little, const char **big)
{
	if (*counter == 0)
		*big = *placeholder;
	(*counter)++;
	if (*counter == ft_strlen(*little))
		return (1);
	else
		return (0);
}

static void		looper2(size_t *counter,
const char **placeholder, const char **onebyone)
{
	*counter = 0;
	*placeholder = *onebyone;
	(*onebyone)++;
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*placeholder;
	const char	*onebyone;
	size_t		counter;
	size_t		lessorequallen;

	lessorequallen = 0;
	counter = 0;
	placeholder = big;
	onebyone = big;
	if (!*little)
		return ((char*)big);
	while (little[counter] != '\0' &&
	*placeholder != '\0' && lessorequallen < len)
	{
		if (little[counter] == *placeholder)
		{
			if (firstif(&counter, &placeholder, &little, &big) == 1)
				return ((char*)big);
		}
		else
			looper2(&counter, &placeholder, &onebyone);
		placeholder++;
		lessorequallen++;
	}
	return (0);
}
