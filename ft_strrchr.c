/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:24:42 by ralee             #+#    #+#             */
/*   Updated: 2017/12/12 15:22:35 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*holder;

	holder = 0;
	if (c == 0)
	{
		return ((char*)(s + (ft_strlen((char*)s))));
	}
	while (*s && *s != '\0')
	{
		if (*s == c)
			holder = (char*)s;
		s++;
	}
	return (holder);
}
