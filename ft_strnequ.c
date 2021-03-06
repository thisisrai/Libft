/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:21:24 by ralee             #+#    #+#             */
/*   Updated: 2017/12/19 14:51:47 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (!n)
		return (1);
	if (s1 && s2)
	{
		while (s1[0] == s2[0] && s1[0] != '\0'
		&& s2[0] != '\0' && count < n - 1)
		{
			s1++;
			s2++;
			count++;
		}
		if (*s1 - *s2 == 0)
			return (1);
	}
	return (0);
}
