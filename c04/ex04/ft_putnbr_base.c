/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 21:25:41 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/19 18:15:48 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkbase(char *base)
{
	int	len;
	int	a;

	len = 0;
	while (base[len] != '\0')
	{
		a = 1;
		while (base[len + a] != '\0')
		{
			if (base[len] == base[len + a]
				|| base[len] == '+'
				|| base[len] == '-'
				|| base[len + a] == '+'
				|| base[len + a] == '-')
				return (0);
			a++;
		}
		len++;
	}
	if (base[0] == '\0' || len == 1)
		return (0);
	return (len);
}

int	ft_neg_nbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		valid_len;
	long	buffer[32];

	i = 0;
	valid_len = ft_checkbase(base);
	if (valid_len == 0)
		return ;
	nbr = ft_neg_nbr(nbr);
	while (nbr / valid_len != 0)
	{
		buffer[i] = nbr % valid_len;
		nbr /= valid_len;
		i++;
	}
	if (nbr / valid_len == 0)
		buffer[i] = nbr % valid_len;
	while (i >= 0)
	{
		write(1, &base[buffer[i]], 1);
		i--;
	}
}
