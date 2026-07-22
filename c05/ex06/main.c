#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	tests[] = {
		-5,
		0,
		1,
		2,
		3,
		4,
		5,
		9,
		11,
		17,
		25,
		29,
		49,
		97,
		100,
		2147483647
	};
	int	size;
	int	i;

	size = sizeof(tests) / sizeof(tests[0]);
	i = 0;

	while (i < size)
	{
		printf("%d is %sprime\n",
			tests[i],
			ft_is_prime(tests[i]) ? "" : "not ");
		i++;
	}
	return (0);
}

