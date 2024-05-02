# Variables to hold the cpp and h files
CPP_FILES := magic8ball.cpp
H_FILES := magic8ball.h

# Variable for the compiler flags
FLAGS := -g -ggdb -Wpedantic -Wall -Wextra -Werror -Wshadow -Wunreachable-code --std=c++20

# The final output executable file
EXEC := Magic8ball.exe

# Default target
all: $(EXEC)

# Rule to link the object files
$(EXEC): $(CPP_FILES) $(H_FILES)
	g++ $(FLAGS) $(CPP_FILES) -o $(EXEC)

# Clean target
clean:
	rm -f $(EXEC)