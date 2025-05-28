# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/11 16:20:50 by hdelbecq          #+#    #+#              #
#    Updated: 2025/05/28 21:27:24 by hdelbecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)
	

re: fclean all

.PHONY: all clean fclean re