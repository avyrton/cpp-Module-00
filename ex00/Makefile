# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddark <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 09:56:23 by ddark             #+#    #+#              #
#    Updated: 2022/03/11 09:56:50 by ddark            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
STD		= -std=c++98
FLAGS	= -Wall -Wextra -Werror

SRC		= megaphone.cpp
OBJ		= $(SRC:%.cpp=%.o)

.PHONY	: all clean fclean re test

%.o: %.cpp
		c++ $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
		c++ $(FLAGS) $(STD) -o $@ $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME) out

re: fclean all
