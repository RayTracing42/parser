/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:24:00 by pravoire          #+#    #+#             */
/*   Updated: 2017/11/15 01:33:26 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static t_list	*content_chk(char *s)
{
	t_list		*lst;
	
	extract_tags(&lst, s);
	chk_root(&lst);
	chk_nest(&lst);
	return (lst);
}

static int		src_chk(int n, char *s)
{
	src_chk_present(n);
	src_chk_file_ext(s);
	return (src_chk_file_type(s));
}

int				main(int ac, char **av)
{
	char		*data;
	t_list		*tags;
	int			fd;

	fd = src_chk(ac, av[1]);
	data = src_get_content(fd);
	tags = content_chk(data);
	extract_data(data);
	return (0);
}
