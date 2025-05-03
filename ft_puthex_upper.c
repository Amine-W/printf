/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:21:43 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/03 13:11:56 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthex_upper(n / 16);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}
