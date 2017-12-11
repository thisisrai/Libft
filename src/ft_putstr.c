/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:44:53 by ralee             #+#    #+#             */
/*   Updated: 2017/12/11 15:47:34 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr(char const *s)
{
	int		index;

	index = 0;
	if (s)
	{
		while (s[index])
		{
			ft_putchar(s[index]);
			index++;
		}
	}
}
