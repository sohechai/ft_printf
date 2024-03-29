/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:26:35 by sohechai          #+#    #+#             */
/*   Updated: 2021/02/01 20:37:18 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_atoi(const char *str, t_printf *st)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[st->j] == '-' || str[st->j] == '0')
	{
		if (str[st->j] == '-')
			sign = -1;
		st->j++;
	}
	while (str[st->j] >= '0' && str[st->j] <= '9')
	{
		res *= 10;
		res += str[st->j] - '0';
		st->j++;
	}
	res *= sign;
	return (res);
}
