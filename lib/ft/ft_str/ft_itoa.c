/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:50:49 by pravoire          #+#    #+#             */
/*   Updated: 2017/04/26 20:08:55 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_filltab(char *dst, t_uint digit, int n, t_uchar neg)
{
	if (!neg)
	{
		if (n > 9)
			ft_filltab(dst, digit - 1, n / 10, neg);
		dst[digit] = (n % 10) + '0';
	}
	else
	{
		if (n < -9)
			ft_filltab(dst, digit - 1, (n / 10) * -1, !neg);
		dst[digit] = (n % 10) * -1 + '0';
	}
}

static char		*ft_neg_itoa(int n)
{
	int			n_cpy;
	t_uint		digit;
	char		*dst;

	digit = 2;
	n_cpy = n;
	while (n_cpy < -9)
	{
		++digit;
		n_cpy /= 10;
	}
	if (!(dst = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	ft_filltab(dst, digit - 1, n, 1);
	dst[digit] = '\0';
	dst[0] = '-';
	return (dst);
}

char			*ft_itoa(int n)
{
	int			n_cpy;
	t_uint		digit;
	char		*dst;

	if (n < 0)
		dst = ft_neg_itoa(n);
	else
	{
		digit = 1;
		n_cpy = n;
		while (n_cpy > 9)
		{
			++digit;
			n_cpy /= 10;
		}
		if (!(dst = (char *)malloc(sizeof(char) * (digit + 1))))
			return (NULL);
		ft_filltab(dst, digit - 1, n, 0);
		dst[digit] = '\0';
	}
	return (dst);
}
