# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 00:41:55 by qduong            #+#    #+#              #
#    Updated: 2022/09/17 16:45:28 by qduong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rpg.bi

CC := c++

RM := rm -rf

CFLAGS := -Wall -Wextra -Werror -std=c++98 -g3

SRCS := AMateria.cpp Cure.cpp main.cpp Character.cpp Ice.cpp MateriaSource.cpp

HEADER = *.hpp

OBJS:= $(SRCS:%.cpp=%.o)

NL		:= \n
Q		:= "
NC		:= \033[0m
RED 	:= \033[1;31m
GREEN 	:= \033[1;32m
BLUE 	:= \033[1;34m
PURPLE	:= \033[35;1m

all:$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo ${Q}${NL}${GREEN} "Compilation Done" ${NC}${Q}
	./$(NAME)

$(OBJS) : %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

debug: $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -D DEBUG=1 $(SRCS) -o debug.bi
	./debug.bi

valgrind:
	valgrind --leak-check=full  --show-leak-kinds=all ./$(NAME)

leaks :
	leaks --atExit -- ./$(NAME)

clean:
	$(RM) $(OBJS) main_test.o
	$(RM) *.dSYM

fclean:clean
	$(RM) $(NAME) test wrong main debug.bi

re:	fclean all

.PHONY: clean fclean re
