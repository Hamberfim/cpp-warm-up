# ALL VARIABLES
# Directories for any tool chain files -examples
# SOME_NEEDED_ROOT_DIR = /home/adhamlin/dev/tools/something-gcc
# SOME_BIN_DIR = $(SOME_NEEDED_ROOT_DIR)/bin
# SOME_INCLUDE_DIR = $(SOME_NEEDED_ROOT_DIR)/include
# INCLUDE_DIRS = $(SOME_INCLUDE_DIR)
# LIB_DIRS = $(INCLUDE_DIRS)

# Toolchain
CC = g++

# Output Files
TARGET = sum
SOURCE = sum.cpp


# Flags
CFLAGS = -g3 -ggdb -fsanitize=address
WFLAGS = -Wpedantic -Wall -Wextra -Werror -Wshadow --std=c++20

# Build
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) $(WFLAGS) -o $(TARGET).exe $(SOURCE)
