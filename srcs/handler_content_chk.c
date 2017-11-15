/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_content_chk.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:06:16 by pravoire          #+#    #+#             */
/*   Updated: 2017/11/15 01:27:53 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static t_list	*chk_tag_nest(t_list *tag, int depth, char *target)
{
	char		*buf;

	buf = ft_strnew(ft_strlen(tag->content) + 1);
	buf[0] = '/';
	buf = ft_strcat(buf, tag->content);
	if (depth == 0)
	{
		while (tag && tag->next && ft_strcmp(buf, tag->content) != 0)
			tag = chk_tag_nest(tag->next, 1, buf);
		return (tag);
	}
	else if (depth == 1)
	{
		if (ft_strcmp(target, tag->content) != 0)
			while (tag && tag->next && ft_strcmp(buf, tag->content) != 0)
				tag = chk_tag_nest(tag->next, 2, buf);
		return (tag);
	}
	else
		if (tag->next && ft_strcmp(buf, tag->next->content) == 0)
			return (tag->next);
		else if (ft_strcmp(tag->content, target) == 0)
			return (tag);
		else
			exit_error(DATA_STRUCTURE);
}

void			chk_nest(t_list **lst)
{
	t_list		*tmp;
	char		*buf;

	buf = ft_strnew(ft_strlen((*lst)->content) + 1);
	buf[0] = '/';
	buf = ft_strcat(buf, (*lst)->content);
	tmp = (*lst)->next;
	while (tmp && ft_strcmp(buf, tmp->content) != 0)
		tmp = chk_tag_nest(tmp, 0, NULL);
}

void			chk_root(t_list **lst)
{
	t_list		*tmp;
	int			res;

	tmp = *lst;
	res = ft_strcmp(tmp->content, SCENE);
	if (res == 0)
	{
		while (tmp->next)
			tmp = tmp->next;
		res = ft_strcmp(tmp->content, C_SCENE);
		if (res != 0)
			exit_error(DATA_STRUCTURE);
	}
	else
		exit_error(DATA_STRUCTURE);
}
