/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:20:23 by ralee             #+#    #+#             */
/*   Updated: 2017/12/01 18:18:58 by ralee            ###   ########.fr       */
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
	placeholder = big;
	if (!*little)
		return (big);
	while (little[counter] != '\0' && *placeholder != '\0')
	{
		if (little[counter] == *placeholder)
		{
			// printf("%s\n", placeholder);
			if (counter == 0)
				big = placeholder;
			counter++;
			if (counter == little_index)
				return (big);
		}
		else
		{
			counter = 0;
		}
		placeholder++;
	}
	return (0);
}
