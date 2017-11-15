/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tags.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravoire <pravoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:11:43 by pravoire          #+#    #+#             */
/*   Updated: 2017/11/15 01:33:29 by pravoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAGS_H
# define TAGS_H

/*
**		XML root tags
*/

# define SCENE "scene"
# define C_SCENE "/scene"

/*
**		XML objects tags
*/

# define CAMERA "camera"
# define C_CAMERA "/camera"

# define LIGHT_A "ambiant"
# define LIGHT_O "orb"
# define LIGHT_S "spot"
# define LIGHT_P "parallel"
# define C_LIGHT_A "/ambiant"
# define C_LIGHT_O "/orb"
# define C_LIGHT_S "/spot"
# define C_LIGHT_P "/parallel"

# define OBJECT_P "plan"
# define OBJECT_S "sphere"
# define OBJECT_C "cylinder"
# define OBJECT_O "cone"
# define C_OBJECT_P "/plan"
# define C_OBJECT_S "/sphere"
# define C_OBJECT_C "/cylinder"
# define C_OBJECT_O "/cone"

/*
**		XML objects attributes tags
*/

# define ORIGIN "origin"
# define COORDINATE "coordinate"
# define DIRECTION "direction"
# define ANGLE "angle"
# define BRIGHTNESS "brightness"
# define COLOR "color"
# define RADIUS "radius"
# define LENGTH "length"
# define C_ORIGIN "/origin"
# define C_COORDINATE "/coordinate"
# define C_DIRECTION "/direction"
# define C_ANGLE "/angle"
# define C_BRIGHTNESS "/brightness"
# define C_COLOR "/color"
# define C_RADIUS "/radius"
# define C_LENGTH "/length"

/*
**		XML objects sub-attributes tags
*/

# define COORD_X "cx"
# define COORD_Y "cy"
# define COORD_Z "cz"
# define ANGLE_X "ax"
# define ANGLE_Y "ay"
# define ANGLE_Z "az"
# define ANGLE_F "full"
# define ANGLE_H "half"
# define COLOR_R "r"
# define COLOR_G "g"
# define COLOR_B "b"
# define LENGT_H "high"
# define LENGT_L "low"
# define C_COORD_X "/cx"
# define C_COORD_Y "/cy"
# define C_COORD_Z "/cz"
# define C_ANGLE_X "/ax"
# define C_ANGLE_Y "/ay"
# define C_ANGLE_Z "/az"
# define C_ANGLE_F "/full"
# define C_ANGLE_H "/half"
# define C_COLOR_R "/r"
# define C_COLOR_G "/g"
# define C_COLOR_B "/b"
# define C_LENGT_H "/high"
# define C_LENGT_L "/low"

#endif
