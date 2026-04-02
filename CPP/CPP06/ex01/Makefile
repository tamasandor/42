# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 23:34:58 by atamas            #+#    #+#              #
#    Updated: 2025/04/27 23:49:01 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize
SRC = Serialize.cpp main.cpp
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