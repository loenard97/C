GCC = 		gcc
SRC =		src/*.c
BIN = 		main
CFLAGS =	-O2
WFLAGS = 	-Wall -Wextra -Werror -Wpedantic


all:
	$(GCC) -o $(BIN) main.c $(SRC) $(WFLAGS)

run: all
	./$(BIN)

clean:
	rm $(BIN)


.PHONY: all run clean
