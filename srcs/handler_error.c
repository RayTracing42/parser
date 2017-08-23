/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:28:25 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/23 17:11:01 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "parser.h"

void			exit_error(int errid)
{
	if (errid == 0)
		ft_printf("Wrong program usage.\nUsage : ./rt <src_file.xml>\n");
	else if (errid == 1)
		ft_printf("Wrong source used. Only .xml files are accepted.\n");
	else if (errid == 2)
		ft_printf("An error occured while opening the file.\n");
	exit(-1);
}
