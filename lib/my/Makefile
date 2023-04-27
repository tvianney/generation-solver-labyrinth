##
## EPITECH PROJECT, 2022
## my
## File description:
## Makefile
##

SRC = $(shell find . -type f -name "*.c")
OBJET = $(SRC:.c=.o)
NAME = my_lib

$(NAME): $(OBJET)
	@ar rc libmy.a $(OBJET)
	mv libmy.a ../

all: $(NAME)

clean:
	@rm -f $(OBJET)

fclean: clean
	@rm -f ../libmy.a
