CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = password_checker
SRC = src/main.c src/password.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all
