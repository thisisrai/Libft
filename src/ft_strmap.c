/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:39:55 by ralee             #+#    #+#             */
/*   Updated: 2017/12/07 13:57:08 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*returnstr;
	char	*copy;
	int		index;

	index = 0;
	copy = (char*)s;
	returnstr = 0;
	if (s && f)
	{
		returnstr = (char*)malloc(ft_strlen((char*)s) + 1);
		if (returnstr)
		{
			ft_strcpy(returnstr, copy);
			while (returnstr[index] != '\0')
			{
				returnstr[index] = f(returnstr[index]);
				index++;
			}
		}
	}
	return (returnstr);
}
