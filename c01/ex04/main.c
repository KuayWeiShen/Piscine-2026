#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 26;
	b = 4;

	ft_ultimate_div_mod(&a, &b);

	printf("div = %d\n", a);
	printf("div = %d\n", b);

	return (0);
}
