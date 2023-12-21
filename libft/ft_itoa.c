/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_digit_count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		is_neg;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	res = ft_calloc((ft_digit_count(n) + is_neg + 1), sizeof(char));
	if (!(res))
		return (NULL);
	i = 0;
	res[i] = 0;
	if (n == 0)
		res[i++] = '0';
	while (n != 0)
	{
		res[i] = (ft_abs((n % 10)) + 48);
		n = n / 10;
		i++;
	}
	res[i] = is_neg * '-';
	ft_strrev(res);
	return (res);
}
/*
int	main(void)
{
	char	*k;

	k = ft_itoa(0);
	printf("%s", k);
	free(k);
}*/