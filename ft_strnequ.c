/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:21:24 by ralee             #+#    #+#             */
/*   Updated: 2017/12/15 17:29:09 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (s1 && s2)
	{
		while (s1[0] == s2[0] && s1[0] != '\0' && s2[0] != '\0' && count <= n)
		{
			s1++;
			s2++;
			count++;
		}
		return (unsigned char)*s1 - (unsigned char)*s2 ? 0 : 1;
	}
	return (-1);
}
