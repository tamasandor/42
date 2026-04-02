# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 19:10:37 by atamas            #+#    #+#              #
#    Updated: 2025/07/22 22:05:41 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
SRC = main.cpp BitcoinExchange.cpp
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