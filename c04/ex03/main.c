#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
    char *tests[] = {
        "42",
        "-42",
        "+42",
        "   42",
        "\t\n\v\f\r42",
        "--42",
        "-+42",
        "+-42",
        "++42",
        "0042",
        "-0042",
        "42abc",
        "abc42",
        "",
        "0",
        "-0"
    };

    int i = 0;
    int size = sizeof(tests) / sizeof(tests[0]);

    while (i < size)
    {
        printf("Input: \"%s\"\n", tests[i]);
        printf("atoi    = %d\n", atoi(tests[i]));
        printf("ft_atoi = %d\n", ft_atoi(tests[i]));
        printf("-------------------------\n");
        i++;
    }
    return (0);
}

//Expected output
//Input	atoi() returns
//"42"	42
//"-42"	-42
//"+42"	42
//" 42"	42
//"\t\n\v\f\r42"	42
//"--42"	0
//"-+42"	0
//"+-42"	0
//"++42"	0
//"0042"	42
//"-0042"	-42
//"42abc"	42
//"abc42"	0
//""	0
//"0"	0
//"-0"	0
