/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 13:58:53 by ralee             #+#    #+#             */
/*   Updated: 2017/12/12 15:35:12 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				returnstr[index] = f(index, returnstr[index]);
				index++;
			}
		}
	}
	return (returnstr);
}
