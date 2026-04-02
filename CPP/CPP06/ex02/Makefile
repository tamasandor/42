# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/28 00:13:51 by atamas            #+#    #+#              #
#    Updated: 2025/04/28 21:46:19 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = realtype
SRC = main.cpp Base.cpp
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra
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