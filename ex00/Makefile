CC = c++
FLAGS = -Wall -Wextra -Werror
TARGET = BraiiiiiiinnnzzzZ
SRC_DIR = src
SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/newZombie.cpp $(SRC_DIR)/randomChump.cpp $(SRC_DIR)/Zombie.cpp
OBJ_DIR = objects
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re