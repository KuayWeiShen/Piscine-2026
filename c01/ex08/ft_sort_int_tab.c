static void    ft_swap(int *tab, int i, int size)
{
    int tmp;

    if (i >= size - 1)
        return;
    if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
        }
        ft_swap(tab, i + 1, size);
}

void    ft_sort_int_tab(int *tab, int size)
{
    if (size <= 1)
        return;
    ft_swap(tab, 0, size);
    ft_sort_int_tab(tab, size - 1);
}