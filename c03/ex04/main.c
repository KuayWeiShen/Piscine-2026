#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Hello, this is a simple test string.";

    printf("Test 1:\n");
    printf("ft_strstr: %s\n", ft_strstr(str, "simple"));
    printf("strstr:    %s\n\n", strstr(str, "simple"));

    printf("Test 2:\n");
    printf("ft_strstr: %s\n", ft_strstr(str, "Hello"));
    printf("strstr:    %s\n\n", strstr(str, "Hello"));

    printf("Test 3:\n");
    printf("ft_strstr: %s\n", ft_strstr(str, "string."));
    printf("strstr:    %s\n\n", strstr(str, "string."));

    printf("Test 4 (not found):\n");
    printf("ft_strstr: %p\n", (void *)ft_strstr(str, "banana"));
    printf("strstr:    %p\n\n", (void *)strstr(str, "banana"));

    printf("Test 5 (empty string):\n");
    printf("ft_strstr: %s\n", ft_strstr(str, ""));
    printf("strstr:    %s\n\n", strstr(str, ""));

    printf("Test 6 (whole string):\n");
    printf("ft_strstr: %s\n", ft_strstr(str, str));
    printf("strstr:    %s\n", strstr(str, str));

    return (0);
}
