#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    char    c;

    if (nb == -2147483648)
    {
        write(1, -2147483648, 11)
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10 + '0');
    write(1, &c, 1);
}

void    print_digits(int num)
{
    char    buffer[num];

    while ()
}

// Currently stack repeats infinitely due to the recursive call in ft_nbrgenerator without a base case. 
void    ft_nbrgenerator(int n, char a)
{
    int len;

    len = 0;
    a = '0';
    while (len < n + 1)
    {
        ft_putchar(a);
        a++;
        len++;
    }
    ft_nbrgenerator(n, a + 1);
}

void    ft_print_combn(int n)
{

}