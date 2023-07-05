/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:56:53 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/24 19:54:08 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_get_type(char c, va_list args);
int		ft_printf(const char *s, ...);
int		ft_printer(char c);
int		lenght(int nb, int base);
char	*ft_itoa(int nb);
int		ft_putnbr(int n);
int		ft_ptr_len(uintptr_t n);
void	ft_print_ptr(uintptr_t n);
int		ft_putptr(unsigned long long n);
int		ft_putunsigned(unsigned int nb);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_hex_len(unsigned int n);
void	ft_print_hex(unsigned int n, char letter);
int		ft_puthex(unsigned int n, char letter);

#endif
