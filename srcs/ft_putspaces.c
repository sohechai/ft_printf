/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:32:13 by sohechai          #+#    #+#             */
/*   Updated: 2021/02/01 20:37:18 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	putzeros(t_printf *st)
{
	while (st->i--)
		ft_putchar('0', st);
}

void	ft_putspaces(t_printf *st)
{
	while (st->length_field--)
		ft_putchar(' ', st);
}
