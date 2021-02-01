/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sohechai <sohechai@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/21 14:41:01 by sohechai     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:09:38 by sohechai    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbrforzero(int n, t_printf *st)
{
	size_t	i;
	long	max;

	i = 0;
	max = n;
	if (max < 0)
		max *= -1;
	if (max >= 10)
	{
		ft_putnbr(max / 10, st);
		ft_putchar(max % 10 + '0', st);
	}
	if (max < 10)
		ft_putchar(max % 10 + '0', st);
}

void	ft_putnbrforu(int n, t_printf *st)
{
	size_t		i;
	long long	max;

	i = 0;
	max = n;
	if (max < 0)
	{
		max = 4294967295 + max + 1;
	}
	if (max >= 10)
	{
		ft_putnbr(max / 10, st);
		ft_putchar(max % 10 + '0', st);
	}
	if (max < 10)
		ft_putchar(max % 10 + '0', st);
}

void	ft_putnbr(long long n, t_printf *st)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-', st);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, st);
		ft_putchar(n % 10 + '0', st);
	}
	if (n < 10)
		ft_putchar(n % 10 + '0', st);
}
