# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddark <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 06:53:29 by ddark             #+#    #+#              #
#    Updated: 2022/03/17 06:53:43 by ddark            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
STD		= -std=c++98
FLAGS	= -Wall -Wextra -Werror

SRC		= Contact.class.cpp PhoneBook.class.cpp main.cpp
OBJ		= $(SRC:%.cpp=%.o)

.PHONY	: all clean fclean re

%.o: %.cpp
		c++ $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
		c++ $(FLAGS) $(STD) -o $@ $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
