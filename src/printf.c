/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/22 16:34:56 by mdekker       #+#    #+#                 */
/*   Updated: 2023/03/02 13:57:02 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_pseudoSwitch((char *)str, i, args);
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	return (len);
}

int	ft_pseudoSwitch(char *str, int i, va_list args)
{
	if (str[i] == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (str[i] == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (str[i] == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (str[i] == 'u')
		return (ft_putunum(va_arg(args, unsigned int)));
	else if (str[i] == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (str[i] == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (str[i] == '%')
	{
		if (str[i - 1] == '%')
			return (ft_putchar_fd('%', 1));
		else
			return (ft_putchar_fd('%', 1));
	}
	else
		return (-1);
}