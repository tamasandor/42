# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 00:06:05 by atamas            #+#    #+#              #
#    Updated: 2025/12/01 21:26:19 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
SRC = main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re clean