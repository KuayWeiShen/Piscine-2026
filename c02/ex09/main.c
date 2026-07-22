#include <unistd.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    write(1, "Before: ", 8);
    write(1, str, sizeof(str) - 1);
    write(1, "\n", 1);

    ft_strcapitalize(str);

    write(1, "After:  ", 8);
    write(1, str, sizeof(str) - 1);
    write(1, "\n", 1);

    return (0);
}
