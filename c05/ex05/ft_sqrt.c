/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 23:09:16 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/21 15:28:15 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < 46341 && i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
//
//int	ft_sqrt(int nb)
//{
//	int	left;
//	int	right;
//	int	mid;
//
//	if (nb <= 0)
//		return (0);
//
//	left = 1;
//	right = nb;
//
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//
//		if (mid * mid == nb)
//			return (mid);
//		else if (mid * mid < nb)
//			left = mid + 1; Discard everything smaller than left
//		else
//			right = mid - 1; Discard everything bigger than right
//	}
//	return (0);
//}
