/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:19:56 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 15:34:25 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11), 1);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(1,"-", 1);
			count++;
		}
		if (n > 9)
		{
			ft_putnbr(n/10);
			n = n % 10;
		}
		count = count + ft_putchar(n + '0');
	}
	return(count);
}