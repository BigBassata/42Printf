/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:20:18 by licohen           #+#    #+#             */
/*   Updated: 2024/05/31 14:01:19 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
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
int ft_strlen(char *str)
{
    int len;
    while (str[len])
        len++;
    return (len);
}

void putvoid(void *str)
{
    
}