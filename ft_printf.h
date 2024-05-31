/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:00:07 by licohen           #+#    #+#             */
/*   Updated: 2024/05/31 14:01:17 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

int ft_printf(const char *format, ...);
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int n);
void ft_putnbr_unsigned(unsigned int n);
void ft_putnbr_hex(unsigned int n, char format);
void ft_putpointer(void *ptr);


#endif