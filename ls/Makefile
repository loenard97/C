CC	= gcc
CFLAGS	= -O2
WFLAGS	= -Wall -Wextra

SRC	= ls.c
BIN	= ls
OBJ	= $(SRC:%.c=%.o)


default: all

all:
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(WFLAGS)

ls.o: ls.c

%.o: %.c

run: all
	./$(BIN)

clean:
	-rm -f $(BIN)
	-rm -f $(OBJ)


.PHONY: default all run clean

