#include <stdio.h>
#include <string.h>

// Your implementation
char	*ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest1[20];
	char	dest2[20];

	size_t	ret1;
	char	*ret2;

	memset(dest1, 'X', sizeof(dest1));
	memset(dest2, 'X', sizeof(dest2));

	ret1 = strlcpy(dest1, src, sizeof(dest1));
	ret2 = ft_strlcpy(dest2, src, sizeof(dest2));

	printf("=== strlcpy ===\n");
	printf("Return value: %zu\n", ret1);
	printf("Destination : \"%s\"\n", dest1);

	printf("\n=== ft_strlcpy ===\n");
	printf("Return value: %p\n", (void *)ret2);
	printf("Destination : \"%s\"\n", dest2);

	return (0);
}
