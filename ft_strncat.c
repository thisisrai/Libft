/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:48:20 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 13:57:56 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	counter;
	char	*start;
	char	*cpy;

	counter = 0;
	start = s1;
	cpy = (char*)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	ft_strcpy(cpy, s2);
	if (*s2 == '\0')
		return (s1);
	while (*s1 != '\0')
		s1++;
	while (*cpy != '\0' && counter < n)
	{
		s1[0] = cpy[0];
		s1++;
		cpy++;
		counter++;
	}
	s1[0] = '\0';
	return (start);
}
