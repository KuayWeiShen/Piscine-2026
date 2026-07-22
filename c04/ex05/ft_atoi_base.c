/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 22:37:59 by wkuay             #+#    #+#             */
/*   Updated: 2026/07/19 21:44:49 by wkuay            ###   ########.fr       */
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
				|| base[len + a] == '-'
				|| base[len + a] == " ")
				return (0);
			a++;
		}
		len++;
	}
	if (base[0] == '\0' || len == 1)
		return (0);
	return (len);
}

int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg_count;
	int	store;
	int	valid_len;
	int	value;

	i = 0;
	neg_count = 1;
	store = 0;
	valid_len = ft_checkbase(base);
	if (valid_len == 0)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ' || str[i] == '+')
	{
		if (str[i] == '-')
			neg_count *= -1;
		i++;
	}
	value = ft_value(str[i], base);
	while (value != -1)
	{
		store = store * valid_len + value;
		i++;
		value = ft_value(str[i], base);
	}
	return (store * neg_count);
}
