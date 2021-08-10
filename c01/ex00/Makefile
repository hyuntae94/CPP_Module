SRC	=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ	=	$(SRC:.cpp=.o)

NAME	=	zombies
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