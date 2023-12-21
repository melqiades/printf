#include "libft.h"

void ft_precheck(int n)
{
    char *check;
     check = ft_itoa(n);
    if (check[2] == 'x' || check[2] == 'X')
    {
        ft_putstr_fd(&check[2],1);
        return ;
    }
    if (n < 0)
    {
        write(1,"-",1);
    }
}

int	ft_abso(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void ft_puthex(int decimal, char set) 
{
    if (decimal == 0) 
        write(1,"0",1);
    ft_precheck(decimal);
    char hexadecimal[100];
    int indx = 0;
    while (ft_abso(decimal) > 0) 
    {
        int remainder = ft_abso(decimal) % 16;

        if (remainder < 10)
            hexadecimal[indx++] = remainder + '0';
        else if(set == 'x')
            hexadecimal[indx++] = remainder + 'a' - 10;
        else
            hexadecimal[indx++] = remainder + 'A' - 10;

        decimal /= 16;
    }

    int i;
    i = indx - 1;
    while (i >= 0) 
    {
     write(1, &hexadecimal[i], 1);
        i--;
    }
}

// int main()
// {
//     ft_puthex(-55,7);
// }