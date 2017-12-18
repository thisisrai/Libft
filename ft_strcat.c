/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 10:38:31 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 13:56:11 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*start;
	char	*cpy;

	start = s1;
	cpy = (char*)malloc(sizeof(char) * (ft_strlen(s2) + 1));
	ft_strcpy(cpy, s2);
	if (*s2 == '\0')
		return (s1);
	while (*s1 != '\0')
		s1++;
	while (*cpy != '\0')
	{
		s1[0] = cpy[0];
		s1++;
		cpy++;
	}
	s1[0] = '\0';
	return (start);
}
