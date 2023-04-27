##
## EPITECH PROJECT, 2023
## dante
## File description:
## Makefile
##


all:
	@make -C ./lib/my -s
	@make -C generator -s
	@make -C solver -s

clean:
	@make clean -C ./lib/my -s
	@make -C generator clean -s
	@make -C solver clean -s

fclean:
	@make fclean -C ./lib/my -s
	@make -C generator fclean -s
	@make -C solver fclean -s

tests_clean:
	@make -C generator tests_clean -s
	@make -C solver tests_clean -s

tests_run:
	@make -C ./lib/my -s
	@make -C generator tests_run -s
	@make -C solver tests_run -s

unit_tests:
	@make -C ./lib/my -s
	@make -C generator unit_tests -s
	@make -C solver unit_tests -s

re: fclean all
