/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:29:20 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 17:29:46 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_putstr(char *str)
{
    int len;

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
