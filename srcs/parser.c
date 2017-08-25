/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:24:00 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/25 11:24:19 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int				main(int ac, char **av)
{
	char		*data;
	int			fd;

	src_chk_present(ac);
	src_chk_file_ext(av[1]);
	fd = src_chk_file_type(av[1]);
	data = src_get_content(fd);
	/*
	** Temporary
	*/
	ft_printf("%s\n%d\n", data, BUFF_SIZE);
	return (0);
}
