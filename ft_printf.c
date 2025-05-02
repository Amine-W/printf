/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:08:23 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 20:45:04 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check(list, &str[i]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end (list);
	return (count);
}

int	ft_check(va_list list, const char *str)
{
	int	count;

	count = 0;
	if (str[1] == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (str[1] == '%')
		count += ft_putchar('%');
	else if (str[1] == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (str[1] == 'd' || str[1] == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (str[1] == 'u')
		count += ft_unsigned_putnbr(va_arg(list, unsigned int));
	else if (str[1] == 'p')
		count += ft_adress(va_arg(list, void *));
	else if (str[1] == 'x')
		count += ft_puthex(va_arg(list, unsigned long int));
	else if (str[1] == 'X')
		count += ft_puthex_upper(va_arg(list, unsigned long int));
	return (count);
}

// int	main(void)
// {
// 	char c = 'o';
// 	char *s="kratos messi";
// 	int	count;
// 	count = 0;
	//CHAR TEST
	// count = ft_printf("prrprrpatapim: test[%c]\n", c);
	// ft_printf("[%i]\n", count);
	// count = printf("prrprrpatapim: test[%c]\n", c);
	// ft_printf("[%i]\n", count);
	// printf("prrprrpatapim: test[%c]\n", c);
	// INT TEST
	// ft_count = ft_printf("prrprrpatapim: test[%i]\n", -2147483648);
	// ft_printf("COUNT:[%i]\n", count);
	// count = printf("prrprrpatapim: test[%i]\n", -2147483648);
	// ft_printf("COUNT:[%i]\n", count);
	//STRING TEST
	// count = ft_printf("prrprrpatapim: test[%s]\n", s);
	// ft_printf("[%i]\n", count);
	// count = printf("prrprrpatapim: test[%s]\n", s);
	// ft_printf("[%i]\n", count);
	//UNSIGNED INT TEST
	// count = ft_printf("prrprrpatapim: test[%u]\n", -12);
	// ft_printf("[%i]\n", count);
	// count = printf("prrprrpatapim: test[%u]\n", -12);
	// ft_printf("[%i]\n", count);
	// void *
	// 	count = ft_printf("prrprrpatapim: test[%p]\n", s);
	// 	ft_printf("[%i]\n", count);
	// 	count = printf("prrprrpatapim: test[%p]\n", s);
	// 	ft_printf("[%i]\n", count);
	// hexa lower
	// count = ft_printf("prrprrpatapim: test[%x]\n", 15);
	// ft_printf("[%i]\n", count);
	// count = printf("prrprrpatapim: test[%x]\n", 15);
	// ft_printf("[%i]\n", count);
	// hexa upper
	// count = ft_printf("prrprrpatapim: test[%X]\n", 15);
	// ft_printf("[%i]\n", count);
	// count = printf("prrprrpatapim: test[%X]\n", 15);
	// ft_printf("[%i]\n", count);
	// %
// 	count = ft_printf("prrprrpatapim: test[%%]\n");
// 	ft_printf("[%i]\n", count);
// 	count = printf("prrprrpatapim: test[%%]\n");
// 	ft_printf("[%i]\n", count);
// }
