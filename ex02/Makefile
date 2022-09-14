# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 00:41:55 by qduong            #+#    #+#              #
#    Updated: 2022/09/14 19:37:30 by qduong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex01.bi

CC := c++

RM := rm -rf

CFLAGS := -Wall -Wextra -Werror -std=c++98 -g

SRCS := example.cpp Animal.cpp Dog.cpp Cat.cpp brain.cpp

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

wrong:
	$(CC) $(CFLAGS) WrongCat.cpp WrongAnimal.cpp brain.cpp -o wrong
	./wrong

main: fclean
	$(CC) $(CFLAGS) main.cpp Cat.cpp Dog.cpp Animal.cpp brain.cpp WrongAnimal.cpp WrongCat.cpp -o main.bi
	
valgrind:
	valgrind --leak-check=full  --show-leak-kinds=all ./$(NAME)

leaks :
	leaks --atExit -- ./$(NAME)

clean:
	$(RM) $(OBJS) main_test.o
	$(RM) *.dSYM

fclean:clean
	$(RM) $(NAME) test wrong main

re:	fclean all

.PHONY: clean fclean re
