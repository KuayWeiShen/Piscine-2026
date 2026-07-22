#include <stdio.h>

char    *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "Hello";
    char src[] = " World!";

    printf("Before: \"%s\"\n", dest);

    ft_strcat(dest, src);

    printf("After:  \"%s\"\n", dest);

    return (0);
}
