/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_Xxu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:55 by licohen           #+#    #+#             */
/*   Updated: 2024/06/10 20:22:08 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base(unsigned long nb, char *str)
{
	unsigned long	base;

	if (!str)
		return ;
	base = ft_strlen(str);
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, str);
		ft_putnbr_base(nb % base, str);
	}
	if (nb < base)
		ft_print_putchar(str[nb]);
}

int	ft_count_unsigned(unsigned long nb, char *str)
{
	int				len;
	unsigned long	base;

	len = 0;
	if (!str)
		return (0);
	base = ft_strlen(str);
	ft_putnbr_base(nb, str);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= base;
		len++;
	}
	return (len);
}

// int main(void)
// {
//     printf("%x", ft_count_unsigned(1234412134, "0123456789abcdef"));
// }