#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "Hello world!";
        char str2[] = "42";
        char str3[] = "";
        char str4[] = "piscine";
        char str5[] = "PISCINE";
        char str6[] = "€";


	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	printf("%s\n", ft_strupcase(str6));

	return (0);
}
