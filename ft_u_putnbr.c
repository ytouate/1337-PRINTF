/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:14:02 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 12:28:08 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_u_putnbr(unsigned int nb)

{
	unsigned int	i;
	size_t			len;

	len = ft_num_len(nb);
	i = nb;
	if (i > 9)
	{
		ft_u_putnbr (i / 10);
		ft_u_putnbr (i % 10);
	}
	else
	{
		ft_putchar (i + '0');
	}
	return (len);
}
