#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    printf("ft_recursive_factorial(-1) = %d\n", ft_recursive_factorial(-1));
    printf("ft_recursive_factorial(0)  = %d\n", ft_recursive_factorial(0));
    printf("ft_recursive_factorial(1)  = %d\n", ft_recursive_factorial(1));
    printf("ft_recursive_factorial(2)  = %d\n", ft_recursive_factorial(2));
    printf("ft_recursive_factorial(3)  = %d\n", ft_recursive_factorial(3));
    printf("ft_recursive_factorial(5)  = %d\n", ft_recursive_factorial(5));

    return (0);
}
