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

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_putnbr(int nb);
void ft_putvoid(void *str);
int	ft_converthexa(long long int nb, char c);
int	ft_puthexalow(unsigned int nb);
int	ft_puthexahigh(unsigned int nb);

#endif