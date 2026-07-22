#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	tests[] = {
		0,
		-4,
		1,
		4,
		9,
		16,
		25,
		26,
		100,
		2147395600
	};
	int	size;
	int	i;

	size = sizeof(tests) / sizeof(tests[0]);
	i = 0;

	while (i < size)
	{
		printf("ft_sqrt(%d) = %d\n", tests[i], ft_sqrt(tests[i]));
		i++;
	}
	return (0);
}
//
//ft_sqrt(0) = 0
//ft_sqrt(-4) = 0
//ft_sqrt(1) = 1
//ft_sqrt(4) = 2
//ft_sqrt(9) = 3
//ft_sqrt(16) = 4
//ft_sqrt(25) = 5
//ft_sqrt(26) = 0
//ft_sqrt(100) = 10
//ft_sqrt(2147395600) = 46340
