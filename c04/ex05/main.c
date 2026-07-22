#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
    // Valid decimal tests
    printf("Decimal 42: %d\n",
        ft_atoi_base("42", "0123456789"));

    printf("Decimal -42: %d\n",
        ft_atoi_base("-42", "0123456789"));

    printf("Decimal +42: %d\n",
        ft_atoi_base("+42", "0123456789"));

    // Leading whitespace tests (ft_atoi behaviour)
    printf("Whitespace decimal: %d\n",
        ft_atoi_base("   42", "0123456789"));

    printf("Whitespace negative: %d\n",
        ft_atoi_base("   ---+--42", "0123456789"));


    // Binary tests
    printf("Binary 101010: %d\n",
        ft_atoi_base("101010", "01"));

    printf("Binary -101010: %d\n",
        ft_atoi_base("-101010", "01"));


    // Hexadecimal tests
    printf("Hex 2A: %d\n",
        ft_atoi_base("2A", "0123456789ABCDEF"));

    printf("Hex -FF: %d\n",
        ft_atoi_base("-FF", "0123456789ABCDEF"));


    // Custom base tests
    printf("Poneyvif base: %d\n",
        ft_atoi_base("vny", "poneyvif"));


    // Stops at invalid characters
    printf("Stops at invalid char: %d\n",
        ft_atoi_base("42abc", "0123456789"));

    printf("Binary stops at 2: %d\n",
        ft_atoi_base("10102", "01"));


    // Zero tests
    printf("Zero: %d\n",
        ft_atoi_base("0", "0123456789"));

    printf("Negative zero: %d\n",
        ft_atoi_base("-0", "0123456789"));


    // Invalid base: empty
    printf("Invalid empty base: %d\n",
        ft_atoi_base("42", ""));

    // Invalid base: one character
    printf("Invalid single char base: %d\n",
        ft_atoi_base("42", "0"));

    // Invalid base: duplicate characters
    printf("Invalid duplicate base: %d\n",
        ft_atoi_base("42", "012340"));

    printf("Invalid duplicate letters: %d\n",
        ft_atoi_base("42", "aabb"));

    // Invalid base: contains '+'
    printf("Invalid plus base: %d\n",
        ft_atoi_base("42", "012+345"));

    // Invalid base: contains '-'
    printf("Invalid minus base: %d\n",
        ft_atoi_base("42", "012-345"));

    // Invalid base: contains whitespace
    printf("Invalid whitespace base: %d\n",
        ft_atoi_base("42", "012 345"));


    // Edge cases
    printf("Only sign: %d\n",
        ft_atoi_base("-", "0123456789"));

    printf("Only whitespace: %d\n",
        ft_atoi_base("     ", "0123456789"));

    printf("Empty string: %d\n",
        ft_atoi_base("", "0123456789"));

    return (0);
}
