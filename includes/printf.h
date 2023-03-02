/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdekker <mdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/02 14:01:51 by mdekker       #+#    #+#                 */
/*   Updated: 2023/03/02 14:02:56 by mdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_pseudoSwitch(char *str, int i, va_list args);

#endif