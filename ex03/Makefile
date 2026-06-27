# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/27 14:01:16 by waroonwork@       #+#    #+#              #
#    Updated: 2026/06/27 15:00:46 by waroonwork@      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	program

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -Wno-shadow -g3 -std=c++98
SUFFIX		:=	.cpp

INC_DIR		:=	includes/
SRCS_DIR	:=	srcs/

SRCS_FILES	:=	main ClapTrap ScavTrap FragTrap DiamondTrap

SRCS		:=	$(addsuffix $(SUFFIX), $(addprefix $(SRCS_DIR), $(SRCS_FILES)))
OBJS		:=	$(SRCS:%$(SUFFIX)=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS) Makefile
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $(OBJS) -o $(NAME)

%.o			:	%$(SUFFIX)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re