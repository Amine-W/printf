/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:42:12 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 11:42:12 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_check(va_list list, const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_unsigned_putnbr(unsigned int n);
int	ft_adress(void *ptr);
int	ft_puthex(unsigned long n);
int	ft_puthex_upper(unsigned int n);

#endif