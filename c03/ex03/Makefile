SRC	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ	=	$(SRC:.cpp=.o)

NAME	= ex03
RM	=	rm -rf
CC	=	clang++
FLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all	:	$(NAME)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all

$(NAME)	:
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)