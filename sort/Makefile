CC	= gcc
CFLAGS	= -O2
WFLAGS	= -Wall -Wextra

SRC	= sort.c
BIN	= sort
OBJ	= $(SRC:%.c=%.o)


default: all

all:
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(WFLAGS)

sort.o: sort.c

%.o: %.c

run: all
	./$(BIN)

clean:
	-rm -f $(BIN)
	-rm -f $(OBJ)


.PHONY: default all run clean

