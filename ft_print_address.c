/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:08:06 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 15:54:55 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbadress(size_t	i)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
		ft_putnbadress(i / 16);
	ft_putchar(base[i % 16]);
	return (ft_base_lenght(i));
}

size_t	ft_print_address(void *ptr)
{
	size_t	i;
	int		e;

	i = (size_t)ptr;
	ft_putstr("0x");
	e = ft_putnbadress(i);
	return (e + 2);
}
