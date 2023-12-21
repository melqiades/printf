/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*loc;

	i = 0;
	loc = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			loc = ((void *)s) + i;
			break ;
		}
		i++;
	}
	return (loc);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char c = 'f';
	char *ptr;
	char *ptr_or;
	char *s = "abcdefg";

	ptr = ft_memchr(s, c, 2);
	ptr_or = memchr(s,c,2);

	printf("the pointer is  %p \nthe original memchr is %p\n", ptr, ptr_or);
}
*/
