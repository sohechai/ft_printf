/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 22:29:56 by sohechai          #+#    #+#             */
/*   Updated: 2021/02/01 20:37:18 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_number(const char *fmt, t_printf *st, va_list ap)
{
	if (ft_isnbwithoutzero(fmt, st) == 1)
	{
		if (ft_isnb(fmt, st) == 1)
			st->length_star = ft_atoi(fmt, st);
		else
			st->length_star = 0;
		if (ft_isflag(fmt, st) == 1)
			ft_putstar(st, fmt, ap);
		if (fmt[st->j] == '.')
		{
			st->j++;
			st->length_field = st->length_star;
			if (ft_isnb(fmt, st) == 1)
				st->length_dot = ft_atoi(fmt, st);
			else
				st->length_dot = 0;
			if (fmt[st->j] == '*')
			{
				st->length_dot = va_arg(ap, int);
				st->j++;
			}
			ft_putfielddot(fmt, st, ap);
		}
	}
}
