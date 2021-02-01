/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_writedot.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 15:04:14 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:06:32 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_dotpercent(t_printf *st, const char *fmt)
{
	if (fmt[st->j] == '%')
		ft_putchar('%', st);
}

void	ft_dotx(t_printf *st, const char *fmt, va_list ap)
{
	if (fmt[st->j] == 'X' || fmt[st->j] == 'x')
	{
		ft_stock_arg(fmt, st, ap);
		if (st->length_dot > ft_strlen(st->strx))
		{
			st->i = st->length_dot - ft_strlen(st->strx);
			while (st->i--)
				ft_putchar('0', st);
			ft_putstr(st->strx, st);
		}
		else if (st->x == 0 && st->length_dot == 0)
			ft_putstr("", st);
		else if (st->length_dot < 0 && st->length_field < 0 && st->x == 0)
			ft_putstr("0", st);
		else if (st->length_dot <= ft_strlen(st->strx) && st->length_dot > 0)
			ft_putstr(st->strx, st);
		else if (st->length_dot <= 0)
			ft_putstr(st->strx, st);
		free(st->strx);
	}
}

void	ft_dotd(t_printf *st, const char *fmt, va_list ap)
{
	if (fmt[st->j] == 'i' || fmt[st->j] == 'd')
		ft_fielddotd(st, fmt, ap);
}

void	ft_dotu(t_printf *st, const char *fmt, va_list ap)
{
	if (fmt[st->j] == 'u')
	{
		ft_stock_arg(fmt, st, ap);
		if (st->length_dot >= ft_strlen_int_u(st->u))
		{
			st->i = st->length_dot - ft_strlen_int_u(st->u);
			while (st->i--)
				ft_putchar('0', st);
			ft_putnbrforu(st->u, st);
		}
		else if (st->length_dot < ft_strlen_int_u(st->u) &&
				st->length_dot >= 0 && st->u != 0)
			ft_putnbrforu(st->u, st);
		else if (st->length_dot < 0)
			ft_putnbrforu(st->u, st);
	}
}
