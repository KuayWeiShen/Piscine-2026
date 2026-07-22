#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World!";

    printf("%s\n", ft_strncat(dest, src, 3));

    return (0);
}
