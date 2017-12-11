/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:48:15 by ralee@stude       #+#    #+#             */
/*   Updated: 2017/12/10 16:33:09 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

// void	setter(char const *s1, char **combostring, int	*comboindex)
// {
// 	int		size;

// 	size = 0;
// 	while (s1[size] != '\0')
// 		{
// 			*combostring[*comboindex] = s1[size];
// 			(*comboindex)++;
// 			size++;
// 		}
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*combostring;
	int		comboindex;

	combostring = 0;
	if (s1 && s2)
	{
		size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
		combostring = (char*)malloc(size - 1);
	}
	comboindex = 0;
	size = 0;
	if (combostring)
	{
		// setter(s1, &combostring, &comboindex);
		while (s1[size] != '\0')
		{
			combostring[comboindex] = s1[size];
			comboindex++;
			size++;
		}
		size = 0;
		while (s2[size] != '\0')
		{
			combostring[comboindex] = s2[size];
			comboindex++;
			size++;
		}
		combostring[comboindex] = '\0';
	}
	return (combostring);
}