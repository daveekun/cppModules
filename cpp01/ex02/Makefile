NAME = run 
FLAGS = -Wall -Wextra -Werror

SRC = main.cpp 
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