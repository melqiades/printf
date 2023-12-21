/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*loc;
	int				i;
	unsigned char	k;

	loc = 0;
	i = 0;
	k = c;
	while (s[i])
	{
		if (s[i] == k)
		{
			loc = (char *)s + i;
			break ;
		}
		s++;
	}
	if (s[i] == k)
		loc = (char *)s + i;
	return (loc);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char fin = 0;
	const char *str = "a    dlfkj";
	char * pos;
	char * pos2;
	char s[] = "tripouille";

	pos = ft_strchr(s, 't' + 256);
	pos2 = strchr(s, 't' + 256);

	printf("position is at %p\n and at: %p", pos, pos2);
	printf("\n the lettter is \"%s\"\n %s", pos, pos2);
}*/
