/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:59:51 by ytouate           #+#    #+#             */
/*   Updated: 2021/11/29 15:55:54 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nb);
size_t	ft_strlen(const char *s);
size_t	ft_num_len(long long nbr);
int		ft_printf(const char *s, ...);
size_t	ft_putnbr_base(char bs, unsigned int i);
size_t	ft_u_putnbr(unsigned int nb);
size_t	ft_print_address(void *ptr);
size_t	ft_base_lenght(size_t nbr);

#endif