NAME = main
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp MateriaSource.cpp AMateriaNode.cpp LinkedList.cpp 
OBJ = $(SRC:.cpp=.o)

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rfd $(NAME)

fclean: clean
	rm -rfd $(OBJ)

re: fclean all