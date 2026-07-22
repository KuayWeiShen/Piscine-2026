/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:24:07 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/20 15:37:34 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	value = 1;
	while (nb > 0)
	{
		value = value * nb;
		nb--;
	}
	return (value);
}
