/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:46:20 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 16:09:46 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	check_arg(va_list	ptr, const char	*n)
{
	if (*n == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (*n == 'd' || *n == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (*n == 'u')
		return (ft_u_putnbr(va_arg(ptr, unsigned int)));
	else if (*n == 'x')
		return (ft_putnbr_base('x', va_arg(ptr, unsigned int)));
	else if (*n == 'X')
		return (ft_putnbr_base('X', va_arg(ptr, unsigned int)));
	else if (*n == 'p')
		return (ft_print_address(va_arg(ptr, void *)));
	else if (*n == '%')
		write(1, "%%", 1);
	else if (*n == 'c')
		ft_putchar(va_arg(ptr, int));
	return (1);
}

int	ft_printf(const char *s, ...)
{
	int		word_count;
	va_list	ptr;

	word_count = 0;
	va_start(ptr, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			word_count += check_arg(ptr, s);
		}
		else
		{
			ft_putchar(*s);
			word_count += 1;
		}
		s++;
	}
	va_end (ptr);
	return (word_count);
}
