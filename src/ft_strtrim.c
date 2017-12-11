/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 17:54:22 by ralee             #+#    #+#             */
/*   Updated: 2017/12/11 15:31:07 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ifchecker(int *index, char const *s, int *end)
{
	while (s[*index] != '\0')
	{
		if ((s[*index + 1] == 32 || s[*index + 1] == '\n' || s[*index + 1] ==
		'\t' || s[*index + 1] == 0) && (s[*index] != 32 &&
		s[*index] != '\n' && s[*index] != '\t'))
			*end = *index;
		(*index)++;
	}
}

void	strsetter(char **str, int *start, int *end, char const *s)
{
	int		index;

	index = 0;
	while (*start < *end + 1)
	{
		str[0][index] = s[*start];
		index++;
		(*start)++;
	}
	str[0][index] = '\0';
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		index;
	char	*str;

	str = 0;
	if (s)
	{
		start = 0;
		while (s[start] == 32 || s[start] == '\n' || s[start] == '\t')
			start++;
		index = start;
		end = index;
		ifchecker(&index, s, &end);
		str = (char*)malloc(end - start + 2);
		if (str)
		{
			strsetter(&str, &start, &end, s);
		}
		return (str);
	}
	return (0);
}
