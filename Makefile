SRC =		src/*.c
CFLAGS =	-O2
WFLAGS = 	-Wall -Wextra -Werror -Wpedantic


all:
	gcc -o main main.c $(SRC) $(WFLAGS)

run: all
	./main

clean:
	rm main

.PHONY: all
