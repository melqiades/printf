/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_list_node;

	new_list = NULL;
	if (!(lst) || !(f) || !(del))
		return (NULL);
	while (lst)
	{
		new_list_node = ft_lstnew(f(lst->content));
		if (!(new_list_node))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!(new_list_node->content))
		{
			ft_lstdelone(new_list_node, del);
		}
		ft_lstadd_back(&new_list, new_list_node);
		lst = lst->next;
	}
	return (new_list);
}
