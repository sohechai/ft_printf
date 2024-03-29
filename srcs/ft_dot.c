/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:08:40 by sohechai          #+#    #+#             */
/*   Updated: 2021/02/01 20:37:18 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_dot(const char *fmt, t_printf *st, va_list ap)
{
	if (fmt[st->j] == '.' && fmt[st->j - 1] != '*')
	{
		st->j++;
		st->length_field = 0;
		if (ft_isnb(fmt, st) == 1)
			st->length_dot = ft_atoi(fmt, st);
		else
			st->length_dot = 0;
		if (fmt[st->j] == '*')
		{
			st->length_dot = va_arg(ap, int);
			st->j++;
		}
		ft_putdot(st, fmt, ap);
	}
}
