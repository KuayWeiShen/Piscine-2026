#include <stdio.h>

char	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("Hello world!"));
	printf("%d\n", ft_str_is_uppercase("42"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("Piscine"));
	printf("%d\n", ft_str_is_uppercase("PISCINE"));

	return (0);
}
