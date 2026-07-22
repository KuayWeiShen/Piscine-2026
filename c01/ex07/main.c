#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void    ft_putnbr(int nb)
{
    char c;

    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);
}

void    print_array(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6};
    int size;

    size = sizeof(tab) / sizeof(tab[0]);

    write(1, "Before: ", 8);
    print_array(tab, size);

    ft_rev_int_tab(tab, size);

    write(1, "After:  ", 8);
    print_array(tab, size);

    return (0);
}
