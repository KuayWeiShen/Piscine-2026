#include <stdio.h>

char	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("Hello world!"));
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("Piscine"));

	return (0);
}
