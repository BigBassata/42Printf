/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:21:33 by licohen           #+#    #+#             */
/*   Updated: 2024/06/10 20:24:34 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str[len])
	{
		ft_print_putchar(str[len]);
		len++;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

int	ft_p(void *ptr)
{
	if (ptr == NULL)
		return (ft_printf_putstr("(nil)"));
	else
		return (ft_printf_putstr("0x") + ft_count_unsigned((unsigned long)ptr,
				"0123456789abcdef"));
}
