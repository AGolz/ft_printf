/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:52:54 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 17:57:31 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int n)
{
	int		ch_count;
	char	*str;

	ch_count = 0;
	str = ft_itoa(n, 10);
	ch_count += ft_putstr(str);
	free(str);
	return (ch_count);
}
