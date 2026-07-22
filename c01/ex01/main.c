#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	print_two_digits(int nbr)
{
	char	buffer[2];

	buffer[0] = (nbr / 10 + '0');
	buffer[1] = (nbr % 10 + '0');
	write(1, buffer, 2);
}

int	main(void)
{
	int n = 0;
	int *p1 = &n;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	ft_ultimate_ft(p9);
	print_two_digits(n);

	return (0);
}
