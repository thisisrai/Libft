/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:04:21 by ralee             #+#    #+#             */
/*   Updated: 2017/12/07 14:18:14 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int		count;

	count = 0;
	if (s1 && s2)
	{
		while (s1[0] == s2[0] && s1[0] != '\0' && s2[0] != '\0')
		{
			s1++;
			s2++;
			count++;
		}
		return (unsigned char)*s1 - (unsigned char)*s2 ? 0 : 1;
	}
	return (0);
}
