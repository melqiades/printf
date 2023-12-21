/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	i = nitems * size;
	if (i / nitems != size)
		return (NULL);
	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdint.h>
int	main(void)
{
	int	nitems = 20;
	int	size = 8;
	void	*k = ft_calloc(SIZE_MAX, SIZE_MAX);

	printf("%p",k);
	free (k);
}
*/