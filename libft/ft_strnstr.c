/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;
	char	*ret;
	int		i;

	llen = ft_strlen(little);
	ret = (char *)big;
	i = 0;
	if (llen > len || !(big) || !(little))
		return (NULL);
	if (llen == 0 || !(little))
		return (ret);
	while (ret[i] && !(len - i < llen))
	{
		if (!(ft_strncmp((ret + i), little, llen)))
			return (ret + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "ab";
	char * empty = (char*)"";

		printf("%s", ft_strnstr(haystack, "ab", 3));

}*/