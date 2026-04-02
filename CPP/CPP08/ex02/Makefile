# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 13:35:00 by atamas            #+#    #+#              #
#    Updated: 2025/07/09 13:35:35 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
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
