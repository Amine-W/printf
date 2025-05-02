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

# define MAJHEX "0123456789ABCDEF"
# define MINHEX "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	check(va_list list, const char *str);
void	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);

#endif