/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*next_node_add;

	if (!(del) || !(lst))
		return ;
	next_node_add = *lst;
	next_node = *lst;
	while (next_node_add)
	{
		del(next_node_add->content);
		next_node_add = next_node_add->next;
		free(next_node);
		next_node = next_node_add;
	}
	*lst = NULL;
}
