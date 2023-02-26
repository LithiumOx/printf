/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/22 16:34:56 by mdekker       #+#    #+#                 */
/*   Updated: 2023/02/26 16:25:36 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;

	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_pseudoSwitch((char *)str, i, args);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

void ft_pseudoSwitch(char *str, int i, va_list args)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		ft_putstr(va_arg(args, char *));
	else if (str[i] == 'p')
		ft_putpointer(va_arg(args, void *));
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == 'x')
		ft_puthex(va_arg(args, unsigned int), 0);
	else if (str[i] == 'X')
		ft_puthex(va_arg(args, unsigned int), 1);
	else if (str[i] == '%')
		ft_putchar('%');
}