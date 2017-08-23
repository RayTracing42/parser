/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:24:00 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/23 16:48:53 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int				main(int ac, char **av)
{
//	char		*data;

	src_chk_present(ac);
	src_chk_file_ext(av[1]);
	src_chk_file_type(av[1]);
//	src_get_content(data, av[1]);
	/*
	** Temporary
	*/
//	ft_printf("%s\n", data);
	return (0);
}
