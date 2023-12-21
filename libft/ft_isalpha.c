/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
	char	i;
	for(i = 0; i < 127; i++)
	{
		printf(" for %c result is %d\n", i, ft_isalpha(i));
	}
}*/
