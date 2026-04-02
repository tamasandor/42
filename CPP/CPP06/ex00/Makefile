# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/19 00:55:03 by atamas            #+#    #+#              #
#    Updated: 2025/04/22 00:06:50 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
SRC = ScalarConverter.cpp main.cpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re