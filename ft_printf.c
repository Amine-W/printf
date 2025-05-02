/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:08:23 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 11:46:31 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list list;
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	va_start(list, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			check(list, &str[i]);
		}
		else
		{
			ft_putchar(&str[i]);
			count++;
		}
		i++;
	}
	va_end (list);
	return (count);
}