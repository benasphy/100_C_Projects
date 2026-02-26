CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = string_utils
SRC = src/main.c src/string_utils.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all