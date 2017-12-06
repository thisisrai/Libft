/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:45:52 by ralee             #+#    #+#             */
/*   Updated: 2017/12/06 13:57:26 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memoryslot;

	memoryslot = malloc(size);
	if (!memoryslot)
		return (0);
	else
		ft_memset(memoryslot, 0, size);
	return (memoryslot);
}
