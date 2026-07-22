#include <unistd.h>

void    ft_putnbr_base(int nbr, char *base);

int main(void)
{
    // Valid decimal tests
    write(1, "Decimal 42: ", 12);
    ft_putnbr_base(42, "0123456789");
    write(1, "\n", 1);

    write(1, "Decimal -42: ", 13);
    ft_putnbr_base(-42, "0123456789");
    write(1, "\n", 1);

    // Valid binary tests
    write(1, "Binary 42: ", 11);
    ft_putnbr_base(42, "01");
    write(1, "\n", 1);

    write(1, "Binary -42: ", 12);
    ft_putnbr_base(-42, "01");
    write(1, "\n", 1);

    // Valid hexadecimal tests
    write(1, "Hex 255: ", 9);
    ft_putnbr_base(255, "0123456789ABCDEF");
    write(1, "\n", 1);

    write(1, "Hex -255: ", 10);
    ft_putnbr_base(-255, "0123456789ABCDEF");
    write(1, "\n", 1);

    // Valid custom base tests
    write(1, "Poneyvif 42: ", 14);
    ft_putnbr_base(42, "poneyvif");
    write(1, "\n", 1);

    // Zero test
    write(1, "Zero: ", 6);
    ft_putnbr_base(0, "0123456789");
    write(1, "\n", 1);

    // Invalid bases
    write(1, "Invalid empty base: ", 20);
    ft_putnbr_base(42, "");
    write(1, "\n", 1);

    write(1, "Invalid single char base: ", 26);
    ft_putnbr_base(42, "0");
    write(1, "\n", 1);

    write(1, "Invalid duplicate base: ", 23);
    ft_putnbr_base(42, "00123");
    write(1, "\n", 1);

    write(1, "Invalid plus base: ", 19);
    ft_putnbr_base(42, "012+345");
    write(1, "\n", 1);

    write(1, "Invalid minus base: ", 20);
    ft_putnbr_base(42, "012-345");
    write(1, "\n", 1);

    return (0);
}

//Decimal 42: 42
//Decimal -42: -42
//Binary 42: 101010
//Binary -42: -101010
//Hex 255: FF
//Hex -255: -FF
//Poneyvif 42: vny
//Zero: 0
//Invalid empty base:
//Invalid single char base:
//Invalid duplicate base:
//Invalid plus base:
//Invalid minus base:
