# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 15:28:29 by atamas            #+#    #+#              #
#    Updated: 2025/02/18 18:55:41 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
SRC = Bureaucrat.cpp main.cpp
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