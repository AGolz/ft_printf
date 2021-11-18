/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:04:14 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 18:56:55 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int n)
{
	int				ch_count;
	char			*str;
	unsigned int	num;

	ch_count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		num = -n;
		ch_count++;
	}
	else
		num = n;
	str = ft_itoa(num, 10);
	ch_count += ft_putstr(str);
	free(str);
	return (ch_count);
}
