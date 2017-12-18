/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:20:23 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 14:21:01 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		looper(size_t *counter,
const char **placeholder, const char **onebyone)
{
	*counter = 0;
	*placeholder = *onebyone;
	(*onebyone)++;
}

char			*ft_strstr(const char *big, const char *little)
{
	const char	*placeholder;
	const char	*onebyone;
	size_t		counter;

	counter = 0;
	placeholder = big;
	onebyone = big;
	if (!*little)
		return ((char*)big);
	while (little[counter] != '\0' && *placeholder != '\0')
	{
		if (little[counter] == *placeholder)
		{
			if (counter == 0)
				big = placeholder;
			counter++;
			if (counter == ft_strlen(little))
				return ((char*)big);
		}
		else
			looper(&counter, &placeholder, &onebyone);
		placeholder++;
	}
	return (0);
}
