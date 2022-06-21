##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC = gcc
CFLAGS = -W -Werror -Wextra -Wall -Iinclude/

BIN = push_swap

SRC = push_swap.c\

OBJ = push_swap.o\

LIB = ./lib/libmy.a

all : $(BIN)

$(BIN) : $(OBJ) $(LIB)
	$(CC) $(CFLAGS) -o $(BIN) $(OBJ) -L./lib -lmy

$(LIB) :
	make -C ./lib/my

clean :
	make clean -C lib/my
	rm -rf $(OBJ)

fclean : clean
	make -C ./lib/my/ fclean
	rm -rf $(BIN)
	rm -rf $(LIB)

re : fclean all
