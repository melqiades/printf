/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	prnt;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		prnt = '-';
		write(fd, &prnt, 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		prnt = n + '0';
		write(fd, &prnt, 1);
	}
}
/*
int main (void)
{
	int    s = 256;
	int     fd = open("foo.txt", O_RDWR | O_CREAT);
	char    k[20] = {0};

	ft_putnbr_fd(s, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, k, 6);
	k[7] = 0;
	printf("this is what we have %s", k);
}*/