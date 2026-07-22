// ===== C03 EX00: test_ft_strcmp.c =====
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("=== Testing ft_strcmp ===\n\n");

	char *a = "hello";
	char *b = "hello";
	printf("equal strings:       your=%d   libc=%d\n", ft_strcmp(a, b), strcmp(a, b));

	a = "hello";
	b = "hell";
	printf("s1 longer than s2:   your=%d   libc=%d\n", ft_strcmp(a, b), strcmp(a, b));

	a = "abc";
	b = "abd";
	printf("different at end:    your=%d   libc=%d\n", ft_strcmp(a, b), strcmp(a, b));

	printf("both empty:          your=%d   libc=%d\n", ft_strcmp("", ""), strcmp("", ""));

	printf("empty vs normal:     your=%d   libc=%d\n", ft_strcmp("", "a"), strcmp("", "a"));

	return (0);
}

// ===== C03 EX01: test_ft_strncmp.c =====
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("=== Testing ft_strncmp ===\n\n");

	char *a = "hello";
	char *b = "hello";
	printf("equal, n=5:   your=%d   libc=%d\n", ft_strncmp(a, b, 5), strncmp(a, b, 5));

	a = "hello";
	b = "hellx";
	printf("diff at pos 4, n=3 (should be 0): your=%d   libc=%d\n", ft_strncmp(a, b, 3), strncmp(a, b, 3));

	a = "abc";
	b = "abd";
	printf("diff at pos 2, n=3: your=%d   libc=%d\n", ft_strncmp(a, b, 3), strncmp(a, b, 3));

	printf("n=0 (should be 0): your=%d   libc=%d\n", ft_strncmp("abc", "xyz", 0), strncmp("abc", "xyz", 0));

	return (0);
}

// ===== C03 EX02: test_ft_strcat.c =====
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	printf("=== Testing ft_strcat ===\n\n");

	char dest1[50] = "hello";
	char src1[] = " world";
	printf("before: \"%s\"\n", dest1);
	ft_strcat(dest1, src1);
	printf("after:  \"%s\"   (expected: \"hello world\")\n\n", dest1);

	char dest2[50] = "";
	char src2[] = "42";
	ft_strcat(dest2, src2);
	printf("empty dest + \"42\": \"%s\"\n\n", dest2);

	char dest3[50] = "start";
	char src3[] = "";
	ft_strcat(dest3, src3);
	printf("normal + empty src: \"%s\"\n", dest3);

	return (0);
}

// ===== C03 EX03: test_ft_strncat.c =====
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	printf("=== Testing ft_strncat ===\n\n");

	char d1[50] = "hello";
	ft_strncat(d1, " world!!!", 6);
	printf("append 6 chars: \"%s\" (expected hello world)\n", d1);

	char d2[50] = "hi";
	ft_strncat(d2, " there", 0);
	printf("nb=0 (nothing added): \"%s\"\n", d2);

	return (0);
}

// ===== C03 EX04: test_ft_strstr.c =====
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("=== Testing ft_strstr ===\n\n");

	char *s = "hello 42 piscine";
	printf("find \"42\": %s\n", ft_strstr(s, "42"));
	printf("find \"piscine\": %s\n", ft_strstr(s, "piscine"));
	printf("find \"hello\": %s\n", ft_strstr(s, "hello"));
	printf("find not present: %s (should be NULL)\n", ft_strstr(s, "school"));
	printf("find empty: %s\n", ft_strstr(s, ""));

	return (0);
}

// ===== C03 EX05: test_ft_strlcat.c =====
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	printf("=== Testing ft_strlcat ===\n\n");

	char d1[20] = "hello";
	unsigned int ret1 = ft_strlcat(d1, " world", 20);
	printf("dest size 20, appended \" world\": ret=%u dest=\"%s\"\n", ret1, d1);

	char d2[10] = "hi";
	unsigned int ret2 = ft_strlcat(d2, " there!!!", 10);
	printf("small size 10: ret=%u dest=\"%s\"\n", ret2, d2);

	return (0);
}

// ===== C04 EX00: test_ft_strlen.c =====
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("=== Testing ft_strlen ===\n\n");

	printf("hello:     your=%d   libc=%d\n", ft_strlen("hello"), (int)strlen("hello"));
	printf("empty:     your=%d   libc=%d\n", ft_strlen(""), (int)strlen(""));
	printf("one char:  your=%d   libc=%d\n", ft_strlen("x"), (int)strlen("x"));
	printf("sentence:  your=%d   libc=%d\n", ft_strlen("42 Piscine C03 C04"), (int)strlen("42 Piscine C03 C04"));

	return (0);
}

// ===== C04 EX01: test_ft_putstr.c =====
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	printf("=== Testing ft_putstr (look at output below) ===\n\n");

	printf("Expected: hello 42\nYour output: ");
	ft_putstr("hello 42");
	printf("\n\n");

	printf("Expected: (empty line)\nYour output: ");
	ft_putstr("");
	printf("|\n\n");

	printf("Expected: one line\nYour output: ");
	ft_putstr("one line\nwith newline");
	printf("|\n");

	return (0);
}

// ===== C04 EX02: test_ft_putnbr.c =====
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("=== Testing ft_putnbr (check screen output) ===\n\n");

	printf("42: ");
	ft_putnbr(42);
	printf("\n");

	printf("-42: ");
	ft_putnbr(-42);
	printf("\n");

	printf("0: ");
	ft_putnbr(0);
	printf("\n");

	printf("INT_MIN edge: ");
	ft_putnbr(-2147483648);
	printf("\n");

	printf("big positive: ");
	ft_putnbr(123456789);
	printf("\n");

	return (0);
}

// ===== C04 EX03: test_ft_atoi.c =====
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("=== Testing ft_atoi ===\n\n");

	printf("42: your=%d   libc=%d\n", ft_atoi("42"), atoi("42"));
	printf("-42: your=%d   libc=%d\n", ft_atoi("-42"), atoi("-42"));
	printf("   123: your=%d   libc=%d\n", ft_atoi("   123"), atoi("   123"));
	printf("42abc: your=%d   libc=%d (stops at invalid)\n", ft_atoi("42abc"), atoi("42abc"));
	printf("empty: your=%d   libc=%d\n", ft_atoi(""), atoi(""));

	return (0);
}

// ===== C04 EX04: test_ft_putnbr_base.c =====
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("=== Testing ft_putnbr_base ===\n\n");

	printf("42 in base 10: ");
	ft_putnbr_base(42, "0123456789");
	printf("\n");

	printf("-42 in base 2: ");
	ft_putnbr_base(-42, "01");
	printf("\n");

	printf("255 in hex (base 16): ");
	ft_putnbr_base(255, "0123456789ABCDEF");
	printf("\n");

	printf("Bad base (should do nothing or handle): ");
	ft_putnbr_base(10, "012");  // duplicate? no, but short ok? test anyway
	printf("\n");

	return (0);
}

// ===== C04 EX05: test_ft_atoi_base.c =====
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("=== Testing ft_atoi_base ===\n\n");

	printf("2A in hex: your=%d (expected 42)\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("1010 in binary: your=%d (expected 10)\n", ft_atoi_base("1010", "01"));
	printf("   -ff in hex: your=%d (expected -255)\n", ft_atoi_base("   -ff", "0123456789abcdef"));
	printf("Bad base test (short): your=%d\n", ft_atoi_base("10", "0"));

	return (0);
}

