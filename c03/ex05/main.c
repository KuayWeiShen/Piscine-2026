#include <stdio.h>
#include <string.h>

// 1. Official OpenBSD strlcat implementation embedded manually
size_t system_strlcat(char *dst, const char *src, size_t siz) {
    char *d = dst;
    const char *s = src;
    size_t n = siz;
    size_t dlen;

    while (n-- != 0 && *d != '\0')
        d++;
    dlen = d - dst;
    n = siz - dlen;

    if (n == 0)
        return (dlen + strlen(s));
    while (*s != '\0') {
        if (n != 1) {
            *d++ = *s;
            n--;
        }
        s++;
    }
    *d = '\0';
    return (dlen + (s - src));
}

// 2. Your libft prototype declaration
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void run_test_case(int case_num, const char *desc, const char *initial_dst, const char *src, size_t size)
{
    // Setup 50-byte isolated buffers with garbage fillings to catch termination bugs
    char buf_orig[50];
    char buf_ft[50];
    
    memset(buf_orig, 'X', sizeof(buf_orig)); 
    memset(buf_ft, 'X', sizeof(buf_ft));
    
    strcpy(buf_orig, initial_dst);
    strcpy(buf_ft, initial_dst);

    // Call the embedded official function vs your ft_strlcat
    size_t res_orig = system_strlcat(buf_orig, src, size);
    size_t res_ft = ft_strlcat(buf_ft, src, size);

    printf("--- Case %d: %s (Size: %zu) ---\n", case_num, desc, size);
    printf("  [Original] Return: %-2zu | String: \"%s\"\n", res_orig, buf_orig);
    printf("  [Your ft ] Return: %-2zu | String: \"%s\"\n", res_ft, buf_ft);
    
    if (res_orig == res_ft && strcmp(buf_orig, buf_ft) == 0)
        printf("  Result: ✅ MATCH\n\n");
    else
        printf("  Result: ❌ MISMATCH!\n\n");
}

int main(void)
{
    printf("================ STRLCAT COMPARISON TEST ================\n\n");

    run_test_case(1, "Fits perfectly", "Hello", " World", 20);
    run_test_case(2, "Exact boundary fit", "42", " Network", 11);
    run_test_case(3, "Forced Truncation", "Pool", " Piscine", 8);
    run_test_case(4, "Buffer size is 0", "Don't touch", "Copy me", 0);
    run_test_case(5, "Size <= strlen(dst) trap", "Unchanged", "Append", 4);

    return (0);
}

