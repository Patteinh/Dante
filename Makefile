##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

all:
	make -C ./generator/
	make -C ./solver/

clean:
	make clean -C ./generator/
	make clean -C ./solver/

fclean: clean
	make fclean -C ./generator/
	make fclean -C ./solver/

re: fclean all

git:
	git add .
	git commit -m "$m"
	git push -u origin main

.PHONY: all clean fclean re git
