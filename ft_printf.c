/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:08:23 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/02 17:30:38 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <unistd.h>
#include <stdio.h>

int	check(va_list list, const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_unsigned_putnbr(unsigned int n);

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
			count += check(list, &str[i]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end (list);
	printf("LAST COUNT = [%i]\n", count);
	return (count);
}

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

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}

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
			count += ft_putnbr(n/10);
			n = n % 10;
		}
		count = count + ft_putchar(n + '0');
	}
	return(count);
}

int	ft_adress(void *ptr)
{
	char	*hexa;
	int		count;

	if (n > 15)
	{
		count += ft_adress(n/16); 
	}
	count = 0;
}

int	ft_unsigned_putnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_unsigned_putnbr(n/10);
		n = n % 10;
	}
	count = count + ft_putchar(n + '0');
	return(count);
}

int	main(void)
{
	char c = 'o';
	char *s="kratos messi";
	int	count;

	count = 0;

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
	
	count = ft_printf("prrprrpatapim: test[%u]\n", -12);
	ft_printf("[%i]\n", count);
	count = printf("prrprrpatapim: test[%u]\n", -12);
	ft_printf("[%i]\n", count);
}