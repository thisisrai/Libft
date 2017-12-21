/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 10:53:01 by ralee             #+#    #+#             */
/*   Updated: 2017/12/20 16:36:45 by ralee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
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
