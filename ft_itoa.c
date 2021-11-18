/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:17:32 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 21:25:15 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_len(unsigned long n, int base)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa(unsigned long n, int base)
{
	char	*str;
	int		len;

	len = 0;
	if (n == 0)
		len++;
	else
		len = count_len(n, base);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = n % base;
		if (n % base > 9)
			str[len - 1] += 'A' - 10;
		else
			str[len - 1] += '0';
		n /= base;
		len--;
	}
	return (str);
}
