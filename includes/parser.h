/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:39:17 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/25 11:24:30 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "libft.h"
# include "tags.h"
# include "errors.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

# define BUFF_SIZE 512 

/*
** handler_src_chk.c
*/

int				src_chk_present(int i);
int				src_chk_file_ext(char *s);
int				src_chk_file_type(char *s);

/*
** handler_content.c
*/

char			*src_get_content(int fd);

/*
** handler_error.c
*/

void			exit_error(int errid);

#endif
