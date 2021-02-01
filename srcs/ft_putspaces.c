/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putspaces.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:32:13 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:50:40 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
