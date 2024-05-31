/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:22:35 by licohen           #+#    #+#             */
/*   Updated: 2024/05/31 15:26:51 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c)
{
    return(write(1, &c, 1));
}
void ft_putstr(char *str)
{
    int i; 

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

size_t ft_print_nb(unsigned int n)
{

}

size_t ft_putnbr(int n)
{

}

size_t	ft_putnbr_base(unsigned long nbr, char *base)
{
    
}