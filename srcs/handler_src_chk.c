/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_src_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:09:30 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/23 17:04:06 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int				src_chk_file_type(char *s)
{
	int			open_res;

	open_res = open(s, O_RDWR);
	if (open_res == -1)
	{
		if (errno == EISDIR)
			exit_error(FILE_EXT);
		else
			exit_error(FILE_OPEN);
	}
	return (0);
}

int				src_chk_file_ext(char *s)
{
	int			src_len;
	int			ext_offset;

	src_len = ft_strlen(s);
	ext_offset = 4;
	if ((ft_strcmp(".xml", ft_strlower(s + src_len - ext_offset))) != 0)
		exit_error(FILE_EXT);
	return (0);
}

int				src_chk_present(int i)
{
	if (i != 2)
		exit_error(USAGE);
	return (0);
}
