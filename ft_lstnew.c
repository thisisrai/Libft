/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 14:29:23 by ralee             #+#    #+#             */
/*   Updated: 2017/12/18 15:25:18 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!content)
	{
		(*list).content = NULL;
		(*list).content_size = 0;
	}
	else
	{
		(*list).content = content;
		(*list).content_size = content_size;
	}
	(*list).next = NULL;
	return (list);
}