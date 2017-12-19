/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 09:55:52 by ralee             #+#    #+#             */
/*   Updated: 2017/12/19 10:28:32 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*holder;
	t_list	*next;

	if (!alst || !*alst)
		return ;
	if (del != NULL)
	{
		holder = *alst;
		while (holder)
		{
			next = holder->next;
			del(holder->content, holder->content_size);
			free(holder);
			holder = next;
		}
	}
	*alst = NULL;
}
