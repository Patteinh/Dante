##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

NAME		=	solver

CPPFLAGS	=	-W -Wall -Wextra

CFLAGS		= 	-I ./include/ -I $(LIB)include/

LFLAGS 		= 	-L $(LIB) -lmy

LDFLAGS		=	--coverage -lcriterion

SRC_DIR		=	./src/

TEST_DIR	=	./tests/

LIB			=	./lib/

SRCS		=	$(SRC_DIR)main.c				\
				$(SRC_DIR)check_position.c		\
				$(SRC_DIR)set_free_elements.c	\
				$(SRC_DIR)open_read.c			\
				$(SRC_DIR)set_tab.c				\

TESTS_SRCS	=	$(TEST_DIR)tests.c	\

OBJS		=	$(SRCS:.c=.o)

TESTS_OBJS	=	$(TESTS_SRCS:.c=.o)

VAL_TO		=	--track-origins=yes
VAL_SL		=	--show-leak-kinds=all
VAL_LC		=	--leak-check=full

all: $(NAME)
	@echo "Build ok!"

build_lib :
	$(MAKE) -C $(LIB)

$(NAME): build_lib $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(CPPFLAGS) $(LFLAGS) $(LDFLAGS)

debug: MAKE += -E CFLAGS+=-g3
debug: CPPFLAGS += -g3
debug: $(NAME)
	@echo "Build debug ok!"

clean:
	$(RM) *.html
	$(RM) *.css
	$(RM) $(TEST_DIR)*.gcda
	$(RM) $(TEST_DIR)*.gcno
	$(RM) $(OBJS)
	$(RM) $(TESTS_OBJS)
	$(MAKE) clean -C $(LIB) -s
	@echo "Clean ok!"

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIB) -s
	@echo "Fclean ok!"

re: fclean all

.PHONY: all build_lib debug tests_run clean fclean re
