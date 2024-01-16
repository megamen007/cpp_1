# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/16 01:09:24 by mboudrio          #+#    #+#              #
#    Updated: 2024/01/16 06:00:35 by mboudrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = cpp_1_ex02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ)  -o $(NAME)
	
clean:
	rm -f $(OBJ) 
	
fclean: clean
	rm -f $(NAME)

re: fclean all