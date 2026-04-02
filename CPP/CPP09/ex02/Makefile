# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 15:39:01 by atamas            #+#    #+#              #
#    Updated: 2025/12/01 20:52:50 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp PmergeMe.cpp
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