#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	result;

	result = ft_iterative_power(2, 5);
	printf("2^5 = %d\n", result);

	result = ft_iterative_power(3, 3);
	printf("3^3 = %d\n", result);

	result = ft_iterative_power(5, 0);
	printf("5^0 = %d\n", result);

	result = ft_iterative_power(2, -1);
	printf("2^-1 = %d\n", result);

	result = ft_iterative_power(7, 1);
	printf("7^1 = %d\n", result);

	result = ft_iterative_power(0, 5);
	printf("0^5 = %d\n", result);

	result = ft_iterative_power(2, 10);
	printf("2^10 = %d\n", result);

	return (0);
}
