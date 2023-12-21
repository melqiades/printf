/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <lpesan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/12/14 23:42:03 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}
/*
#include <stdio.h>
int main(void)
{
	t_list  *k;
	t_list  *l;
	t_list  *new;
	char    hello[] = "hello";
	
	k = malloc(sizeof(t_list));
	l = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));

	l->content = hello;
	k->next = l;
	ft_lstadd_back(&k, new);
	printf("here %p\n %p", l->next, new);
}*/