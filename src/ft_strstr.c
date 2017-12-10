/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:20:23 by ralee             #+#    #+#             */
/*   Updated: 2017/12/10 13:50:03 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	looper(int *counter, char **placeholder, char **onebyone)
{
	*counter = 0;
	*placeholder = *onebyone;
	(*onebyone)++;
}

char	*ft_strstr(char *big, char *little)
{
	char	*placeholder;
	char	*onebyone;
	int		counter;

	counter = 0;
	placeholder = big;
	onebyone = big;
	if (!*little)
		return (big);
	while (little[counter] != '\0' && *placeholder != '\0')
	{
		if (little[counter] == *placeholder)
		{
			if (counter == 0)
				big = placeholder;
			counter++;
			if (counter == ft_strlen(little))
				return (big);
		}
		else
			looper(&counter, &placeholder, &onebyone);
		placeholder++;
	}
	return (0);
}
