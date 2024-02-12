NAME = brainz
FLAGS = -Wall -Wextra -Werror

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "compiling $(NAME)"

%.o: %.cpp
	@c++ -c $(FLAGS) -o $@ $<
	@echo "compiling $<"

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re