/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amert <amert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 14:11:57 by amert             #+#    #+#             */
/*   Updated: 2025/01/01 16:36:33 by amert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_percent(void);
int	ft_putchar(int x);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_hexa(unsigned int z, char *list);
int	ft_un_int(unsigned int nb);
int	ft_printu(unsigned long x, char *list);
int	ft_printu2(unsigned long x, char *list);
int	handle_format(va_list vl, int ch);
int	ft_printf(const char *str, ...);

#endif