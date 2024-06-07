/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_XXu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: licohen <licohen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:39:55 by licohen           #+#    #+#             */
/*   Updated: 2024/06/07 17:58:49 by licohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base(unsigned int nb, char *str)
{
	unsigned int	base;

	base = ft_strlen(str);
	if (nb < 0)
	{
		ft_print_putchar('-');
		nb = -nb;
	}
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, str);
		ft_putnbr_base(nb % base, str);
	}
	if (nb < base)
		ft_print_putchar(str[nb]);
}

int	ft_count_unsigned(unsigned int nb, char *str)
{
	int	len;
	int	base;

	len = 0;
	base = ft_strlen(str);
	ft_putnbr_base(nb, str);
	if (!str)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		nb = nb / base;
		len++;
	}
	return (len);
}

// int main(void)
// {
//     printf("%x", ft_count_unsigned(1234412134, "0123456789abcdef"));
// }