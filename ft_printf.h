/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:00:07 by licohen           #+#    #+#             */
/*   Updated: 2024/06/10 20:15:45 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN (-2147483648)
# define INT_MAX 2147483647

int	ft_print_putchar(char c);
int	ft_strlen(char *str);
int	ft_printf(const char *format, ...);
int	ft_printf_putstr(char *str);
int	ft_count_signed(int nb);
int	ft_count_unsigned(unsigned long nb, char *str);
int	ft_p(void *ptr);

#endif
