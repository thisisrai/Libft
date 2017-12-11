/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 13:48:15 by ralee             #+#    #+#             */
/*   Updated: 2017/12/11 11:56:26 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	setter(char const *s1, char **combostring, int *comboindex)
{
	int		size;

	size = 0;
	while (s1[size] != '\0')
	{
		combostring[0][*comboindex] = s1[size];
		(*comboindex)++;
		size++;
	}
}

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
	if (combostring)
	{
		setter(s1, &combostring, &comboindex);
		setter(s2, &combostring, &comboindex);
		combostring[comboindex] = '\0';
	}
	return (combostring);
}
