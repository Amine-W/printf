/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:23:46 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/03 13:16:55 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}
