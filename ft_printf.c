/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:08:23 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/30 15:10:31 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"

int ft_printf(const char *c, ...)
{
	va_list list;
	int	len;
	int	i;
	
	len = ft_strlen(c);
	va_start(list, c);
	i = 0;
	while(i < len)
	{
		va_arg(list, int);
		i++;
	}
}