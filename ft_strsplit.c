/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 13:55:22 by ralee             #+#    #+#             */
/*   Updated: 2017/12/14 18:10:53 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0' && str[0] != c)
		word++;
	return (word);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen((char*)str)))))
		return (0);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char	**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		word;
	char	**s;

	i = 0;
	j = 0;
	if (str)
	{
		word = ft_count_words(str, c);
		if (!(s = (char **)malloc(sizeof(s) * (word + 1))))
			return (0);
		while (str[i] == c && str[i])
			i++;
		while (j < word && str[i])
		{
			s[j] = ft_word(str, c, &i);
			j++;
		}
		s[j] = 0;
		return (s);
	}
	return (0);
}