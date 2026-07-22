#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    printf("Test 1:\n");
    printf("strncmp    = %d\n", strncmp("hello", "hello", 5));
    printf("ft_strncmp = %d\n\n", ft_strncmp("hello", "hello", 5));

    printf("Test 2:\n");
    printf("strncmp    = %d\n", strncmp("hello", "help", 4));
    printf("ft_strncmp = %d\n\n", ft_strncmp("hello", "help", 4));

    printf("Test 3:\n");
    printf("strncmp    = %d\n", strncmp("hello", "help", 2));
    printf("ft_strncmp = %d\n\n", ft_strncmp("hello", "help", 2));

    printf("Test 4:\n");
    printf("strncmp    = %d\n", strncmp("abc", "abcd", 4));
    printf("ft_strncmp = %d\n\n", ft_strncmp("abc", "abcd", 4));

    printf("Test 5:\n");
    printf("strncmp    = %d\n", strncmp("abcd", "abc", 4));
    printf("ft_strncmp = %d\n\n", ft_strncmp("abcd", "abc", 4));

    printf("Test 6:\n");
    printf("strncmp    = %d\n", strncmp("apple", "banana", 0));
    printf("ft_strncmp = %d\n", ft_strncmp("apple", "banana", 0));

    return (0);
}
