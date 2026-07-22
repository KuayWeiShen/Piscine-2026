#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("2^5 = %d\n", ft_recursive_power(2, 5));
	printf("3^4 = %d\n", ft_recursive_power(3, 4));
	printf("5^0 = %d\n", ft_recursive_power(5, 0));
	printf("7^1 = %d\n", ft_recursive_power(7, 1));
	printf("2^-3 = %d\n", ft_recursive_power(2, -3));
	printf("0^5 = %d\n", ft_recursive_power(0, 5));

	return (0);
}
