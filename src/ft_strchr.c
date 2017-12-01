/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:24:42 by ralee             #+#    #+#             */
/*   Updated: 2017/11/30 16:46:07 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		return ((char*)(s + (ft_strlen((char*)s))));
	}
	while (*s && *s != '\0')
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (0);
}
