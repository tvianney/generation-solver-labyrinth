##
## EPITECH PROJECT, 2022
## antman
## File description:
## Makefile
##

SRC = $(shell find ./src -name "*.c")
TESTS = $(shell find ./tests -name "*.c") \
		src/rand_pair_int.c \
		src/randint.c \
		src/rand_impair_int.c
OBJET = $(SRC:.c=.o)
NAME = generator
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

run: all
	@./$(NAME)

tests_clean:
	@rm -f *.gcda
	@rm -f *.gcno
	@echo "\033[33m========Tests clean========\033[0m"

unit_tests:
	$(CC) $(TESTS) -o unit_tests --coverage -lcriterion $(CFLAGS) $(LDFLAGS)
	@echo "\033[32m========Compilation of tests done========\033[0m"

tests_run: unit_tests
	make tests_clean -s
	@./unit_tests
	@echo "\033[32m========Tests done========\033[0m"

.SILENT:$(OBJ)
.PHONY:all g3 clean fclean re run tests_run tests_clean unit_tests
