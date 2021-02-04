##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	$(shell find -name "*.c")

OBJ	=	$(SRC:.c=.o)

NAME	=	104intersection

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(SRC) -lm
		@echo "COMPILATION EN COURS....."
		@echo "Compilation réussie."
		@echo "La bibliothèque est prête à être utlisée."

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	find -name "*~" -delete
	find -name "*#" -delete
	find -name "*.o" -delete
coffee: cof


re:	fclean all
