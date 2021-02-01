/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/25 13:24:50 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 14:17:54 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_putstr(char *str, t_printf *st)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++], st);
	return (str);
}
