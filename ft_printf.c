/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:56:25 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 17:29:44 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_convert(va_list arg, char c)
{
    int len; 

    len = 0;
    if (c == 'c')
    len = ft_print_putchar(va_arg(arg, int));
    if (c == 's')
    len = ft_printf_putstr(va_arg(arg, char *));
    if (c == 'd' || c == 'i')
    len = ft_count_signed(va_arg(arg, int));
    if (c == 'u')
    len = ft_count_unsigned(va_arg(arg, int), "0123456789");
    if (c == 'x')
    len = ft_count_unsigned(va_arg(arg, int), "0123456789abcdef");
    if (c == 'X')
    len = ft_count_unsigned(va_arg(arg, int), "0123456789ABCDEF");
    if (c == '%')
    len = ft_print_putchar('%');
}

void ft_printf(const char *format, ...)
{
    
}

