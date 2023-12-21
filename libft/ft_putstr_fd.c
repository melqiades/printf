/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*
int main (void)
{
	char    *s = "abcd\nsfe\nsfe\n";
	int     fd = open("foo.txt", O_RDWR | O_CREAT, 0644);
	char    k[20] = {0};

	ft_putstr_fd(s, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, k, 20);
	printf("this is what we have %s", k);
	close(fd);
}*/