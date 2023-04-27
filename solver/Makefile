##
## EPITECH PROJECT, 2022
## antman
## File description:
## Makefile
##

SRC = $(shell find ./src -name "*.c")
TESTS = $(shell find ./tests -name "*.c")
OBJET = $(SRC:.c=.o)
NAME = solver
CC = gcc
CFLAGS = -Wall -Iinclude -I../include -g3
LDFLAGS = -L../lib -lmy

$(NAME): $(OBJET)
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(NAME)
	@echo "\033[32m==========Compilation done for $(NAME)==========\033[0m"

all: $(NAME)

clean:
	rm -f $(OBJET)
	@echo "\033[33m======Clean all files *.o of $(NAME) done======\033[0m"

fclean: clean
	rm -f $(NAME)
	@echo "\033[33m=========Clean the binary $(NAME) done=========\033[0m"

g3: fclean
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(NAME) -g3
	@echo "\033[32m==========Compilation done for $(NAME) g3==========\033[0m"

re: fclean all

run:
	@gcc *.c -o $(NAME) $(CFLAGS)
	@./$(NAME)

tests_clean:
	@rm -f *.gcda
	@rm -f *.gcno
	@rm -f unit_tests
	@echo "\033[33m========All files generate by criterion are deleted========"

unit_tests:
	$(CC) $(TESTS) -o unit_tests --coverage -lcriterion $(CFLAGS)
	@echo "\033[32m========Compilation of tests done========\033[0m"

tests_run: unit_tests
	@rm -f *.gcno
	@./unit_tests

.SILENT:$(OBJ)
.PHONY:all g3 clean fclean re run tests_run tests_clean
