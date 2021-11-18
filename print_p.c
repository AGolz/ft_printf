/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:36:43 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 21:32:57 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr)
{
	int		ch_count;
	char	*def_ptr;
	size_t	pointer;

	pointer = (size_t)ptr;
	ch_count = ft_putstr("0x");
	def_ptr = ft_itoa(pointer, 16);
	def_ptr = ft_tolower(def_ptr);
	ch_count += ft_putstr(def_ptr);
	free(def_ptr);
	return (ch_count);
}
