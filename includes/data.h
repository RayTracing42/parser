/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 11:43:50 by pravoire          #+#    #+#             */
/*   Updated: 2017/09/07 19:00:06 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

typedef struct		s_option
{
	int				type;
	char			*value;
}					t_option;

typedef struct		s_tag
{
	struct s_tag	*parent;
	int				is_closing_tag;
	int				type;
	char			*name;
	t_option		*attr;
}					t_tag;

#endif
