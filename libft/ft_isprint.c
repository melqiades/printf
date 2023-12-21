/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
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
		if(isprint(i) != 0)
		{
			printf("numer = %d, znak = %c \n", i, i);
		}
		//printf(" for %c result is %d\n", i, ft_isascii(i));
		// printf(" pro š %d\n", ft_isascii("š"));
	}
}*/
