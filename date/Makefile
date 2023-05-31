CC	= gcc
CFLAGS	= -O2
WFLAGS	= -Wall -Wextra -Werror

SRC	= date.c
BIN	= date
OBJ	= $(SRC:%.c=%.o)


default: all

all:
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(WFLAGS)

date.o: date.c

%.o: %.c

run: all
	./$(BIN)

clean:
	-rm -f $(BIN)
	-rm -f $(OBJ)


.PHONY: default all run clean

