/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amert <amert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 14:12:13 by amert             #+#    #+#             */
/*   Updated: 2025/01/01 16:36:29 by amert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int z, char *list)
{
	int	count;

	count = 0;
	if (z >= 16)
	{
		count += ft_hexa(z / 16, list);
	}
	count += ft_putchar(list[z % 16]);
	return (count);
}

int	ft_printu(unsigned long x, char *list)
{
	if (x == 0)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	return (ft_printu2(x, list) + 2);
}

int	ft_printu2(unsigned long x, char *list)
{
	int	count;

	count = 0;
	if (x >= 16)
	{
		count += ft_printu2(x / 16, list);
	}
	count += ft_putchar(list[x % 16]);
	return (count);
}
