/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:16:51 by ralee             #+#    #+#             */
/*   Updated: 2017/12/13 17:06:55 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	is_negative(int *positive, int *copy)
{
	if (*copy < 0)
	{
		*positive = 1;
		*copy = -(*copy);
	}
}

// void	setter(int *n, int *digits, char **str)
// {
// 	str[0][*digits] = '\0';
// 	while (*digits)
// 	{
// 		str[0][*digits] = *n % 10 + '0'
// 		(*n) = (*n / 10);
// 		(*digits)--;
// 	}
// }

char	*ft_itoa(int n)
{
	int		copy;
	int		positive;
	int		digits;
	char	*str;

	copy = n;
	positive = 0;
	digits = 0;
	is_negative(&positive, &copy);
	while(copy >= 10)
	{
		digits++;
		copy = copy / 10;
	}
	digits++;
	digits = digits + 1 + positive;
	str = (char*)malloc(digits);
	if (str)
	{
		str[digits] = '\0';
		digits--;
		while (digits >= 0)
		{
			str[digits] = n % 10 + '0';
			n = n / 10;
			digits--;
		}
		if (positive == 1)
		{
			str[0] = '-';
		}
	}
	return (str);
}