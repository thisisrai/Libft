/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 14:19:23 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 14:10:33 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int			start;
	long long	number;
	int			positive;
	int			placeholder;

	start = 0;
	number = 0;
	positive = 1;
	while (str[start] == '\t' || str[start] == '\n' || str[start] == '\v' ||
	str[start] == '\f' || str[start] == '\r' || str[start] == ' ')
		start++;
	if (str[start] == '-' || str[start] == '+')
	{
		if (str[start] == '-')
			positive = -1;
		start++;
	}
	while (str[start] >= '0' && str[start] <= '9')
	{
		number = number * 10;
		placeholder = str[start] - '0';
		number = number + placeholder;
		start++;
	}
	return ((number * positive));
}
