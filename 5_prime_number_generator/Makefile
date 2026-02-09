CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = prime
SRC = src/main.c src/prime.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -lm

clean:
	rm -f $(TARGET)

rebuild: clean all
