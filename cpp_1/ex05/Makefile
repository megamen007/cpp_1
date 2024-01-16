# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/16 01:14:39 by mboudrio          #+#    #+#              #
#    Updated: 2024/01/16 05:50:01 by mboudrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Harl

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ)  -o $(NAME)
	
clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all