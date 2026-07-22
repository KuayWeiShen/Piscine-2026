#include <stdio.h>

char	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello world!"));
	printf("%d\n", ft_str_is_printable("42"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("piscine"));
	printf("%d\n", ft_str_is_printable("PISCINE"));
	printf("%d\n", ft_str_is_printable("€"));


	return (0);
}
