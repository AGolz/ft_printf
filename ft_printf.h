/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiora <cfiora@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 06:22:08 by cfiora            #+#    #+#             */
/*   Updated: 2021/08/04 19:03:40 by cfiora           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <float.h>

int		ft_putstr(char *s);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_tolower(char *str);
void	ft_putchar(char c);

char	*ft_itoa(unsigned long n, int base);

int		ft_printf(const char *str, ...);

int		print_c(char c);
int		print_d(int n);
int		print_p(void *ptr);
int		print_s(char *str);
int		print_u(unsigned int n);
int		print_x(unsigned int n, char x);

#endif
