/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:39:17 by pravoire          #+#    #+#             */
/*   Updated: 2017/11/15 01:33:33 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include "libft.h"
# include "tags.h"
# include "errors.h"
# include "data.h"

# define BUFF_SIZE 512 

/*
** handler_src_chk.c
*/

int				src_chk_present(int i);
int				src_chk_file_ext(char *s);
int				src_chk_file_type(char *s);

/*
** handler_content_retriever.c
*/

char			*src_get_content(int fd);
void			extract_tags(t_list **lst, char *s);

/*
** handler_content_chk.c
*/

void			chk_root(t_list **lst);
void			chk_nest(t_list **lst);

/*
** handler_error.c
*/

void			exit_error(int errid);

/*
** handler_data_retriever.c
*/

void			extract_data(char *s);

#endif
