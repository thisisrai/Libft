/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:53:01 by ralee             #+#    #+#             */
/*   Updated: 2017/12/20 16:35:00 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	// t_list	*new_list;
	// t_list	*next;
	// t_list	*holder;

	// holder = f(lst);
	// new_list = NULL;
	// if (lst && f)
	// {
	// 	if (!(new_list = ft_lstnew(holder->content, holder->content_size)))
	// 		return (NULL);
	// 	holder = new_list;
	// 	lst = lst->next;
	// 	while (lst != NULL)
	// 	{
	// 		next = f(lst);
	// 		if (!(holder->next = ft_lstnew(next->content, next->content_size)))
	// 			return (NULL);
	// 		holder = holder->next;
	// 		lst = lst->next;
	// 	}
	// }
	// return (new_list);

	t_list *ret;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		ret = ft_lstmap(lst->next, f);
		ft_lstadd(&ret, f(lst));
	}
	else
		ret = f(lst);
	return (ret);
}
