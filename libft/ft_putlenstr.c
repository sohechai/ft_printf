/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putlenstr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 14:49:11 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:48:04 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_putlenstr(char *str, int len, t_printf *st)
{
	int i;

	i = 0;
	while (str[i] && i < len)
		ft_putchar(str[i++], st);
	return (str);
}
