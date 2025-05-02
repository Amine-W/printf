/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:36:26 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 11:36:26 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list list, const char *str)
{
	int	i;
	int	count;

	count = 0;
	if(str[1] == 'c')
		count += ft_putchar(va_arg(list, int));
	else if(str[1] == 's')
		count += ft_putstr(va_arg(list, char*));
	else if(str[1] == 'd' || str[1] == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if(str[1] == 'u')
		count += ft_unsigned_putnbr(va_arg(list, unsigned int));
	else if(str[1] == 'p')
		count += ft_adress(va_arg(list, int));
	return(count);
}