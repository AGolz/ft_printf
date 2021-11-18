/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:58:25 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 21:14:29 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_x(unsigned int n, char x)
{
	int		ch_count;
	char	*str;

	ch_count = 0;
	str = ft_itoa(n, 16);
	if (x == 'x')
		str = ft_tolower(str);
	ch_count += ft_putstr(str);
	free(str);
	return (ch_count);
}
