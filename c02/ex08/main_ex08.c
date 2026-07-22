#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str1[] = "Hello world!";
        char str2[] = "42";
        char str3[] = "";
        char str4[] = "piscine";
        char str5[] = "PISCINE";
        char str6[] = "€";


	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	printf("%s\n", ft_strlowcase(str6));

	return (0);
}
