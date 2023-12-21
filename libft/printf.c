
#include "libft.h"
#include <stdarg.h> 

int ft_flag_type(const char *c)
{
    if(*c == 'c')
        return (1);
    else if(*c == 's')
        return (2);
    else if(*c == 'p')
        return (3);
    else if(*c == 'd')
        return (4);
    else if(*c == 'i')
        return (5);
    else if(*c == 'u')
        return (6);
    else if(*c == 'x')
        return (7);
    else if(*c == 'X')
        return (8);
    else if(*c == '%')
        return (9);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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


int ft_printf(const char *format, ...)
{
    int k;
    k = 0;
    char m;

    va_list args;
    va_start(args, format);
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            k = ft_flag_type(format);
            if(k == 1)
                ft_putchar_fd((char)va_arg(args, int), 1);
            if(k == 2)
                ft_putstr_fd(va_arg(args, char*), 1);
            if(k == 4 || k == 5)
                ft_putnbr_fd(va_arg(args, int), 1);
            // if(k == 6)
            //     ft_putnbr_fd_uns(va_arg(args, unsigned int), 1);
            // if (k == 7)
            //     ft_puthex(va_arg(args, int), 1);
            // if(k == 8)
            //     ft_puthex(va_arg(args, int), 2);
            // if (k == 9)
            //     ft_putchar_fd('%', 1);
            format++;
        }
        else
            ft_putchar_fd(*format, 1);
        format++;
    }
    return (1);
}


int main(void)
{
    int k;
    k = -5555;
    ft_printf("h %d", k);
}