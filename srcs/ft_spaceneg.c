/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_spaceneg.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 13:35:42 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:57:18 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_fielddotd(t_printf *st, const char *fmt, va_list ap)
{
	if (fmt[st->j] == 'd' || fmt[st->j] == 'i')
	{
		ft_stock_arg(fmt, st, ap);
		st->len = ft_strlen_int(st->d);
		if (st->d >= 0 && st->length_field > 0)
			st->length_field += 1;
		if (st->length_dot == 0 && st->d == 0)
			st->len -= 1;
		if (st->length_field >= 0)
			ft_fieldisposd(st);
		else if (st->length_field < 0)
			ft_fieldisnegd(st);
	}
}

void		ft_fieldisposd(t_printf *st)
{
	if (st->length_dot < st->len)
		st->length_field -= st->len + 1;
	else
		st->length_field -= st->length_dot + 1;
	st->i = st->length_dot - st->len;
	if (st->length_field > 0)
		ft_putspaces(st);
	if (st->d < 0)
		ft_putchar('-', st);
	if (st->length_dot > 0 && st->length_dot > st->len)
		putzeros(st);
	if (st->length_dot != 0 || st->d != 0)
		ft_putnbrforzero(st->d, st);
}

void		ft_fieldisnegd(t_printf *st)
{
	st->length_field *= -1;
	if (st->d >= 0)
		st->length_field += 1;
	if (st->length_dot < st->len)
		st->length_field -= st->len + 1;
	else
		st->length_field -= st->length_dot + 1;
	st->i = st->length_dot - st->len;
	if (st->d < 0)
		ft_putchar('-', st);
	if (st->length_dot > 0 && st->length_dot > st->len)
		putzeros(st);
	if (st->length_dot != 0 || st->d != 0)
		ft_putnbrforzero(st->d, st);
	if (st->length_field > 0)
		ft_putspaces(st);
}

void		ft_fieldisnegu(t_printf *st)
{
	st->length_field *= -1;
	if (st->u >= 0)
		st->length_field += 1;
	if (st->length_dot < st->len)
		st->length_field -= st->len + 1;
	else
		st->length_field -= st->length_dot + 1;
	st->i = st->length_dot - st->len;
	if (st->length_dot > 0 && st->length_dot > st->len)
		putzeros(st);
	if (st->length_dot != 0 || st->u != 0)
		ft_putnbrforu(st->u, st);
	if (st->length_field > 0)
		ft_putspaces(st);
}

void		ft_fieldisnegx(t_printf *st)
{
	st->length_field *= -1;
	if (st->x >= 0)
		st->length_field += 1;
	if (st->length_dot == 0 && st->x == 0)
		st->len -= 1;
	if (st->x < 0)
		st->length_field += 1;
	if (st->length_dot < st->len)
		st->length_field -= st->len + 1;
	else
		st->length_field -= st->length_dot + 1;
	st->i = st->length_dot - st->len;
	if (st->length_dot > 0 && st->length_dot > st->len)
		putzeros(st);
	if (st->length_dot != 0 || st->x != 0)
		ft_putstr(st->strx, st);
	if (st->length_field > 0)
		ft_putspaces(st);
}
