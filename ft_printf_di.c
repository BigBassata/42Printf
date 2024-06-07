/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:01:18 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 15:33:56 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_print_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
        ft_print_putchar(nb + '0');
}

int ft_count_signed(int nb)
{
    int len;

    len = 0;
    ft_putnbr(nb);
    if (nb == -2147483648)
        return (11);
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        len ++;
        nb = -nb;
    }
    while(nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

// int main (void)
// {
//     printf("Count :%d\n", ft_count_signed(1963));
// }