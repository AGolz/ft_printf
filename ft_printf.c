/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:22:02 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 18:42:18 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c)
{
	if (c == 'c' || c == 'd' || c == 'i' || c == 'p' || c == 's'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

static int	print_format(char c, va_list ar)
{
	int	ch_count;

	ch_count = 0;
	if (c == 'c')
		ch_count += print_c(va_arg(ar, int));
	if (c == 'd' || c == 'i')
		ch_count += print_d(va_arg(ar, int));
	if (c == 'p')
		ch_count += print_p(va_arg(ar, void *));
	if (c == 's')
		ch_count += print_s(va_arg(ar, char *));
	if (c == 'u')
		ch_count += print_u(va_arg(ar, unsigned int));
	if (c == 'x' || c == 'X')
		ch_count += print_x(va_arg(ar, unsigned int), c);
	if (c == '%')
		ch_count += ft_putstr("%");
	return (ch_count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		ch_count;
	va_list	ar;

	i = 0;
	ch_count = 0;
	va_start(ar, str);
	while (str[i])
	{
		if (str[i] == '%' && check_format(str[i + 1]) && str[i + 1])
		{
			i++;
			ch_count += print_format(str[i], ar);
		}
		else
		{
			ft_putchar(str[i]);
			ch_count++;
		}
		i++;
	}
	va_end(ar);
	return (ch_count);
}
