/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tags.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:11:43 by pravoire          #+#    #+#             */
/*   Updated: 2017/08/23 14:16:21 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAGS_H
# define TAGS_H

/*
 *		XML root tags
 */

# define SCENE "<scene>"
# define C_SCENE "</scene>"

/*
 *		XML objects tags
 */

# define CAMERA "<camera>"
# define C_CAMERA "</camera>"

# define LIGHT "<light>"
# define C_LIGHT "</light>"

# define OBJECT "<object>"
# define C_OBJECT "</object>"

/*
 *		XML objects tags types
 */

# define LIGHT_A "ambiant"
# define LIGHT_O "orb"
# define LIGHT_S "spot"
# define LIGHT_P "parallel"

# define OBJECT_P "plan"
# define OBJECT_S "sphere"
# define OBJECT_C "cylinder"
# define OBJECT_O "cone"

/*
 *		XML objects attributes tags
 */

# define ORIGIN "<origin>"
# define C_ORIGIN "</origin>"
# define COORDINATE "<coordinate>"
# define C_COORDINATE "</coordinate>"
# define DIRECTION "<direction>"
# define C_DIRECTION "</direction>"
# define ANGLE "<angle>"
# define C_ANGLE "</angle>"
# define BRIGHTNESS "<brightness>"
# define C_BRIGHTNESS "</brightness>"
# define COLOR "<color>"
# define C_COLOR "</color>"
# define RADIUS "<radius>"
# define C_RADIUS "</radius>"
# define LENGTH "<length>"
# define C_LENGTH "</length>"

/*
 *		XML attributes types
 */

# define COORD_X "x"
# define COORD_Y "y"
# define COORD_Z "z"
# define ANGLE_X "x"
# define ANGLE_Y "y"
# define ANGLE_Z "z"
# define ANGLE_F "full"
# define ANGLE_H "half"
# define COLOR_R "r"
# define COLOR_G "g"
# define COLOR_B "b"
# define LENGT_H "high"
# define LENGT_L "low"

#endif
