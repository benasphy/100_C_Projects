CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = fibonacci
SRC = src/main.c src/fibonacci.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all
