/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:43:57 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 13:50:19 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		index;
	char	*str;

	i = 0;
	index = 0;
	while (src[index])
		index++;
	str = (char*)malloc(sizeof(*str) * (index + 1));
	if (str == 0)
		return (0);
	while (i < index)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
