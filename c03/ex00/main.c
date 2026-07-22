#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *s1 = "apple";
    char *s2 = "apple";

    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));

    s1 = "apple";
    s2 = "apricot";
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));

    s1 = "banana";
    s2 = "apple";
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));

    s1 = "abc";
    s2 = "abcd";
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));

    s1 = "";
    s2 = "";
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));

    return (0);
}
