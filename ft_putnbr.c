/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:10:45 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 15:56:17 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int nb)

{
	long	i;
	size_t	len;

	len = ft_num_len(nb);
	i = nb;
	if (i < 0)
	{
		ft_putchar ('-');
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr (i / 10);
		ft_putnbr (i % 10);
	}
	if (i >= 0 && i <= 9)
	{
		ft_putchar (i + '0');
	}
	return (len);
}
