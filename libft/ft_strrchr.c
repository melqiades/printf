/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*loc;
	int				len;
	unsigned char	k;

	loc = 0;
	len = ft_strlen(s);
	k = c;
	if (s[len] == k)
	{
		loc = (char *)s + len;
		return (loc);
	}
	while (len > -1)
	{
		if (s[len] == k)
		{
			loc = (char *)s + len;
			return (loc);
		}
		len--;
	}
	return (loc);
}
/*
int	main(void)
{
	char fin = 'L';
	char *str = "ao    dLfkj";
	char * pos;
	char s[] = "tripouille";

	pos = ft_strrchr(s, 'l');
	printf("position is at %p", pos);
	printf("\n the lettter is \"%s\"", pos);
}*/
