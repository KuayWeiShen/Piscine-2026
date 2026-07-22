/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 20:47:06 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/15 21:30:30 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printable(char *str, int i)
{
	if (str[i] >= ' ' && str[i] <= '~')
		write(1, &str[i], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	tmp;

	i = 0;
	char *hex = "0123456789abcdef"
	high = 10 / 16;
	low = 10 % 16;

	while (str[i] != '\0')
	{
		printable(str, i);
		if (!printable(str, i))
			write (1, '\\', 1);
			

