/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 04:12:05 by pravoire          #+#    #+#             */
/*   Updated: 2017/04/26 20:08:47 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t			i;
	long			res;
	unsigned int	neg;

	neg = 0;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\t' || \
			str[i] == '\f' || str[i] == '\n' || str[i] == '\v')
		++i;
	if (str[i] == '-')
	{
		++i;
		++neg;
	}
	else if (str[i] == '+')
		++i;
	while (ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - '0');
	if ((int)res == 0 && res != 0)
		return (neg) ? 0 : -1;
	if (neg)
		return ((int)-res);
	return ((int)res);
}
