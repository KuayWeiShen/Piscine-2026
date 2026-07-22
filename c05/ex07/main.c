#include <stdio.h>

int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main(void)
{
    int tests[] = {-5, 0, 1, 2, 3, 4, 5, 10, 17, 18, 29, 30, 97, 100};
    int size = sizeof(tests) / sizeof(tests[0]);
    int i;

    i = 0;
    while (i < size)
    {
        printf("Number: %d\n", tests[i]);
        printf("  Is prime? %d\n", ft_is_prime(tests[i]));
        printf("  Next prime: %d\n\n", ft_find_next_prime(tests[i]));
        i++;
    }

    return (0);
}
