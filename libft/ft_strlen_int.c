/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_int.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 14:48:17 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:48:04 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_strlen_int(long n)
{
	int		cmpt;
	long	result;

	cmpt = 0;
	result = n;
	if (n < 0)
		result *= -1;
	while (result >= 10)
	{
		result = result / 10;
		cmpt++;
	}
	if (result < 10)
		cmpt++;
	return (cmpt);
}

int		ft_strlen_int_u(long n)
{
	int		cmpt;
	long	result;

	cmpt = 0;
	result = n;
	if (result < 0)
		result = 4294967295 - n + 1;
	while (result >= 10)
	{
		result = result / 10;
		cmpt++;
	}
	if (result < 10)
		cmpt++;
	return (cmpt);
}
