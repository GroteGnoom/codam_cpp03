NAME = claptrap
SRC = main.cpp ClapTrap.cpp
INC = ClapTrap.hpp

ifdef DEBUG
	CC=clang++
	ASAN_OPTIONS='detect_leaks=1'
	FLAGS = -Wall -Wextra -fsanitize=address -DDEBUG=1 -g -std=c++98 -pedantic
else
	CC=c++
	FLAGS = -Wall -Wextra -Werror
endif

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
