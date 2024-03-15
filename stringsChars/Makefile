# Toolchain
CC = g++

# Output Files
TARGET = useGetLine
SOURCE = useGetLine.cpp


# Flags
CFLAGS = -g3 -ggdb -fsanitize=address
WFLAGS = -Wpedantic -Wall -Wextra -Werror -Wshadow --std=c++20

# Build
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(WFLAGS) -o $(TARGET).exe $(SOURCE)