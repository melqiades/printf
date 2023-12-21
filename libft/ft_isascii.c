/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
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
		printf(" for %c result is %d\n", i, ft_isascii(i));
		printf(" pro š %d\n", ft_isascii("š"));
	}
}*/
