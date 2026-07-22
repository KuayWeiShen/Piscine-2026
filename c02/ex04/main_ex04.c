#include <stdio.h>

char	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("Hello world!"));
	printf("%d\n", ft_str_is_lowercase("42"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("Piscine"));
	printf("%d\n", ft_str_is_lowercase("piscine"));

	return (0);
}
