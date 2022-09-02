# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 00:41:55 by qduong            #+#    #+#              #
#    Updated: 2022/09/02 16:22:23 by qduong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex00.bi

CC := c++

RM := rm -rf

CFLAGS := -Wall -Wextra -Werror -std=c++98 -g

SRCS := main.cpp Animal.cpp Dog.cpp Cat.cpp

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
	$(CC) $(CFLAGS) example_wrong.cpp WrongCat.cpp WrongAnimal.cpp -o wrong
	./wrong

test: 
	$(CC) $(CFLAGS) example.cpp Cat.cpp Dog.cpp Animal.cpp -o test
	./test
valgrind:
	valgrind --leak-check=full  --show-leak-kinds=all ./$(NAME)

leaks :
	leaks --atExit -- ./$(NAME)

clean:
	$(RM) $(OBJS) main_test.o
	$(RM) *.dSYM

fclean:clean
	$(RM) $(NAME) test wrong

re:	fclean all

.PHONY: clean fclean re
