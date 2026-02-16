CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = unit_converter
SRC = src/main.c src/converter.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all
