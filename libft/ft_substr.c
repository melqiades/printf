/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned	int start, size_t	len)
{
	char	*prt;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
	{
		prt = malloc(sizeof(char));
		*prt = 0;
		return (prt);
	}
	if ((slen - start) < len)
		prt = malloc((slen - start + 1) * sizeof(char));
	else
		prt = malloc((len + 1) * sizeof(char));
	if (prt == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		prt[i] = s[start + i];
		i++;
	}
	prt[i] = 0;
	return (prt);
}

/*
int	main(void)
{
	char	*str = "Hello World";
	int		start = 4;
	int		len = 3;

	printf("%s", ft_substr(str, start, len));
}*/