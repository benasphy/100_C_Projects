CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = rps
SRC = src/main.c src/game.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all
