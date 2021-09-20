SRC	=	main.cpp Fixed.cpp
OBJ	=	$(SRC:.cpp=.o)

NAME	= ex01
RM	=	rm -rf
CC	=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

all	:	$(NAME)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all

$(NAME)	:
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)