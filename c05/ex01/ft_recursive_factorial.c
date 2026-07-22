/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:38:38 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/20 21:01:21 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	value = nb;
	if (nb == 0)
		return (1);
	if (nb != 0)
	{
		nb--;
		value = value * ft_recursive_factorial(nb);
	}
	return (value);
}

//int	ft_recursive_factorial(int nb)
//{
//	if (nb < 0)
//		return (0);
//	if (nb == 0)
//		return (1);
//	return (nb * ft_recursive_factorial(nb -1)
//}
