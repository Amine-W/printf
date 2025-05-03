/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:19:56 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/03 12:53:22 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putchar((n % 10) + '0');
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
