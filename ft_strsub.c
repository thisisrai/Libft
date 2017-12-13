/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:25:58 by ralee             #+#    #+#             */
/*   Updated: 2017/12/12 15:22:41 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*converteds;
	char	*fresh_string;
	size_t	index;

	fresh_string = (char*)malloc(len + 1);
	converteds = (char*)s;
	index = 0;
	if (s && fresh_string)
	{
		while (index < len)
		{
			fresh_string[index] = converteds[start];
			index++;
			start++;
		}
		fresh_string[index] = '\0';
	}
	return (fresh_string);
}
