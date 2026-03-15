CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = word_counter
SRC = src/main.c src/word_counter.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all