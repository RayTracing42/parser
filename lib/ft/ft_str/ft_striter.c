/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:19:34 by pravoire          #+#    #+#             */
/*   Updated: 2017/04/26 20:09:52 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

void		ft_striter(char *s, void (*f)(char *))
{
	t_uint		i;

	if (!s || !f)
		return ;
	i = MAX_UINT;
	while (s[++i])
		f(&(s[i]));
}
