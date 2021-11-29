/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:03:22 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 14:13:44 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(char bs, unsigned int i)
{
	char	*base;

	base = "0123456789abcdef";
	if (bs == 'X')
		base = "0123456789ABCDEF";
	if (i > 15)
		ft_putnbr_base(bs, i / 16);
	ft_putchar(base[i % 16]);
	return (ft_base_lenght(i));
}
