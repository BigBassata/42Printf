/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:00:07 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 19:13:50 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_print_putchar(char c);
int			ft_strlen(char *str);
int		    ft_printf(const char *format, ...);
int			ft_printf_putstr(char *str);
int			ft_count_signed(int nb);
int			ft_count_unsigned(unsigned int nb, char *str);

#endif
