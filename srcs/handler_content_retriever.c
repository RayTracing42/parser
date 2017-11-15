/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_content_retriever.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 09:39:03 by pravoire          #+#    #+#             */
/*   Updated: 2017/11/14 23:30:48 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static void		get_tags(t_list **lst, char *s, int nb_tag)
{
	int			i;
	int			k;
	char		*buf;
	t_list		*tmp;

	i = -1;
	while (++i < ft_strlen(s))
	{
		k = 0;
		while (s[i] && s[i++] != '<')
			;
		while (s[i + k] && s[i + k] != '>')
			k++;
		if (!(buf = ft_strnew(k)))
			exit_error(MALLOC);
		buf[k] = '\0';
		buf = ft_strncpy(buf, s + i, k);
		tmp = ft_lstnew(buf, ++k);
		ft_lstadd_back(lst, tmp);
		free(buf);
		i += k;
	}
}

static int		get_nb_tag(char *s)
{
	int			nb_tag;
	int			i;
	int			j;

	nb_tag = 0;
	i = -1;
	while (++i < ft_strlen(s))
		if (s[i] == '<')
		{
			j = 1;
			while ((s[i + j] != '>') && (s[i + j] != '\0'))
				j++;
			if (s[i + j] == '\0')
				exit_error(DATA_STRUCTURE);
			else
				nb_tag++;
		}
	if (nb_tag == 0 || nb_tag % 2)
		exit_error(DATA_STRUCTURE);
	return (nb_tag);
}

void			extract_tags(t_list **lst, char *s)
{
	int			nb_tag;

	if (!s)
		exit_error(DATA_INVALID);
	nb_tag = get_nb_tag(s);
	*lst = NULL;
	get_tags(lst, s, nb_tag);
}

static char		*extend_buf(char *s, int n)
{
	char		*temp;

	temp = s;
	if (!(s = ft_strnew((BUFF_SIZE * n) + 1)))
		exit_error(MALLOC);
	if (temp)
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
