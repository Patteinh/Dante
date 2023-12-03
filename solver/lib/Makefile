##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-I ./include/ -W -Wall -Wextra

OBJ			=	$(SRCS:.c=.o)

SRCS		=	my_strlen.c			\
				my_strcpy.c			\
				my_strcat.c			\
				my_strdup.c			\
				my_str_to_array.c	\
				my_free_array.c		\

all :	$(NAME)
$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY:	all clean fclean re
