/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 00:57:07 by pravoire          #+#    #+#             */
/*   Updated: 2017/04/26 20:06:36 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n-- && *(t_uchar *)s1 == *(t_uchar *)s2)
	{
		if (n)
		{
			s1++;
			s2++;
		}
	}
	return (*(t_uchar *)s1 - *(t_uchar *)s2);
}
