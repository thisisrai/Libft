/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:20:23 by ralee             #+#    #+#             */
/*   Updated: 2017/11/29 16:40:46 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

char	*ft_strstr(char *big, char *little)
{
	char	*placeholder;
	int		little_index;
	int		counter;

	counter = 0;
	little_index = ft_strlen(little);
	if (!*little)
		return (big);
	while (little[counter] != '\0' && *big != '\0')
	{
		if (little[counter] == *big)
		{
			if (counter == 0)
				placeholder = big;	
			counter++;
		}
		else
		{
			counter = 0;
		}
		big ++;
	}
	// printf("%s ==== placeholder, %s ====== big \n", placeholder, big);
	if (little_index == counter)
		return (placeholder);
	return (0);
}
