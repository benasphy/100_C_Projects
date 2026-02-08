# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Iinclude

# Target executable name
TARGET = stopwatch

# Source files
SRC = src/main.c src/stopwatch.c

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Clean build files
clean:
	rm -f $(TARGET)

# Rebuild from scratch
rebuild: clean all
