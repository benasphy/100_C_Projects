CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
TARGET = simple_quiz
SRC = src/main.c src/quiz.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

rebuild: clean all
