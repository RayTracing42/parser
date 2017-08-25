/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_src_chk.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:09:30 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/25 09:35:39 by pravoire         ###   ########.fr       */
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
	char		*tmp;
	int			src_len;
	int			ext_offset;

	tmp = ft_strdup(s);
	src_len = ft_strlen(tmp);
	ext_offset = 4;
	if ((ft_strcmp(ft_strlower(tmp + src_len - ext_offset), ".xml")) != 0)
	{
		free(tmp);
		exit_error(FILE_EXT);
	}
	free(tmp);
	return (0);
}

int				src_chk_present(int i)
{
	if (i != 2)
		exit_error(USAGE);
	return (0);
}
