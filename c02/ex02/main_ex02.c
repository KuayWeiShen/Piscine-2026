#include <stdio.h>

char	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Hello world!"));
	printf("%d\n", ft_str_is_alpha("42"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Piscine"));

	return (0);
}
