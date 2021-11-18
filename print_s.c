/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:48:01 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 17:51:27 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	ch_count;

	ch_count = 0;
	if (!str)
		str = "(null)";
	ch_count += ft_putstr(str);
	return (ch_count);
}
