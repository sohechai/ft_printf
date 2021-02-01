/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 14:04:20 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 13:56:33 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	t_printf	st[1];
	va_list		ap;

	va_start(ap, fmt);
	st->j = 0;
	st->count = 0;
	while (fmt[st->j] != '\0')
	{
		if (fmt[st->j] == '%')
		{
			st->j++;
			ft_printsimpleflag(st, ap, fmt);
			ft_star(st, fmt, ap);
			ft_number(fmt, st, ap);
			ft_minus(fmt, st, ap);
			ft_dot(fmt, st, ap);
			ft_zero(fmt, st, ap);
		}
		else
			ft_putchar(fmt[st->j], st);
		st->j++;
	}
	va_end(ap);
	return (st->count);
}
