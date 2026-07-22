#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned n);

void	test(char *src, unsigned int n)
{
	char dest[50];

	ft_strncpy(dest, src, n);
	printf("src=\"%s\", n=%u -> \"%.20s\"\n", src, n, dest);
}

int	main(void)
{
	test("Hello world!", 5);
	test("42", 1);
	test("", 5);
	test("Piscine", 0);
	test("Hello", 10);

	return (0);
}
