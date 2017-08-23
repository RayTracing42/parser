# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pravoire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/09 18:19:41 by pravoire          #+#    #+#              #
#*   Updated: 2017/08/23 17:07:05 by pravoire         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

#
# Compilation tools
#

CC =			gcc

CC_FLAGS =		-Wall -Wextra -Werror

#
# Target
#

NAME =			parser

#
# Headers decalarations
#

INC_DIR =		includes

DEP =			$(INC_DIR)/parser.h

#
# Sources declarations
#

SRC_DIR =		srcs
SRC =			$(SRC_DIR)/parser.c \
				$(SRC_DIR)/handler_src_chk.c \
				$(SRC_DIR)/handler_error.c

OBJ =			$(SRC:.c=.o)

#
# Library declarations
#

LIB_DIR =		lib

LFT_DIR =		$(LIB_DIR)/ft
LFT_INC =		$(LFT_DIR)/$(INC_DIR)
LFT =			libft.a
LFT_C =			-L $(LFT_DIR) -lft

#
# Includes, Libraries and Frameworks sets
#

INC_SET =		-I $(INC_DIR) -I $(LFT_INC)

LIB_SET =		$(LFT_C)

#
# Rules
#

all : $(LFT) $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CC_FLAGS) -o $@ $^ $(INC_SET) $(LIB_SET)

$(LFT) :
	@echo 'Compiling libft...'
	@make -C $(LFT_DIR)
	@echo 'Compilation ended successfully.'

%.o : %.c $(DEP)
	@$(CC) $((CC_FLAGS) -o $@ $(INC_SET) $(LIB_SET) -c $<

clean :
	@echo 'Cleaning objects files...'
	@rm -rf $(OBJ)
	@make clean -C $(LFT_DIR)
	@echo 'Deletion complete.'

fclean : clean
	@echo 'Cleaning libs and exe...'
	@rm -rf $(NAME)
	@rm -rf $(LFT_DIR)/$(LFT)
	@echo 'Deletion complete.'

re : fclean all
