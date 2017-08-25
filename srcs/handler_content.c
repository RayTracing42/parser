/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 09:39:03 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/25 11:20:37 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static char		*extend_buf(char *s, int n)
{
	char		*temp;

	temp = s;
	if (!(s = ft_strnew((BUFF_SIZE * n) + 1)))
		exit_error(MALLOC);
	if(temp)
	{
		s = ft_strcat(s, temp);
		free(temp);
	}
	return (s);
}

char			*src_get_content(int fd)
{
	int			n;
	ssize_t		read_res;
	char		*buf;
	char		*tmp;

	n = 1;
	buf = NULL;
	if (!(tmp = ft_strnew(BUFF_SIZE + 1)))
		exit_error(MALLOC);
	while ((read_res = read(fd, tmp, BUFF_SIZE)))
	{
		buf = extend_buf(buf, n++);
		buf = ft_strncat(buf, tmp, read_res);
	}
	free(tmp);
	return (buf);
}
