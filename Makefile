CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Iinclude
SRC = $(wildcard src/*.c)
BIN = minicpu

all: $(BIN)

$(BIN): $(SRC)
	$(CC) $(CFLAGS) -o $(BIN) $(SRC)

run: $(BIN)
	./$(BIN)

clean:
	rm -f $(BIN)

.PHONY: all run clean
