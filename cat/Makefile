CC	= gcc
CFLAGS	= -O2
WFLAGS	= -Wall -Wextra -Werror

SRC	= cat.c
BIN	= cat
OBJ	= $(SRC:%.c=%.o)


default: all

all:
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(WFLAGS)

cat.o: cat.c

%.o: %.c

run: all
	./$(BIN)

clean:
	-rm -f $(BIN)
	-rm -f $(OBJ)


.PHONY: default all run clean

