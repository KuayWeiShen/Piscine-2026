#include <stdio.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char	*text = "Hello";
	int len;

	len = ft_strlen(text);
	printf("Length: %d\n", len);

	return (0);
}
