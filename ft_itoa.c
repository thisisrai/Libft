/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 17:16:51 by ralee             #+#    #+#             */
/*   Updated: 2017/12/14 15:10:05 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	is_negative(int *positive, int *n)
{
	if (*n < 0)
	{
		*positive = 1;
		*n = -(*n);
	}
}

char	*ft_itoa(int n)
{
	int		tmpn;
	int		len;
	int		positive;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmpn = n;
	len = 2;
	positive = 0;
	is_negative(&positive, &n);
	while (tmpn /= 10)
		len++;
	len += positive;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (positive)
		str[0] = '-';
	return (str);
}