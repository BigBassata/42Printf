/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:56:25 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 19:19:55 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_print_putchar(va_arg(arg, int));
	else if (c == 's')
		len = ft_printf_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		len = ft_count_signed(va_arg(arg, int));
	else if (c == 'u')
		len = ft_count_unsigned(va_arg(arg, unsigned int), "0123456789");
	else if (c == 'x')
		len = ft_count_unsigned(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len = ft_count_unsigned(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		len = ft_print_putchar('%'); 
    return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	int		len;
	int		i;

	if (!format)
		return (-1);
	va_start(arg_ptr, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_convert(arg_ptr, format[i]);
		}
		else
		{
			ft_print_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(arg_ptr);
	return (len);
}

