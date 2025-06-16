# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/11 16:20:50 by hdelbecq          #+#    #+#              #
#    Updated: 2025/06/16 08:56:01 by hdelbecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  harlFilter
C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

$(info Using compiler: $(C++))
all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)
	

re: fclean all

.PHONY: all clean fclean re