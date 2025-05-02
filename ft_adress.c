/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:22:05 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 20:22:33 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(void *ptr)
{
	int	count;

	if (!ptr)
		return (ft_putstr("0x0"));
	count = ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr);
	return (count);
}
