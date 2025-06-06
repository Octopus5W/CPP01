# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/11 16:20:50 by hdelbecq          #+#    #+#              #
#    Updated: 2025/06/01 16:48:18 by hdelbecq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  HI_THIS_IS_BRAIN
C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp
OBJ = $(SRC:.cpp=.o)

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