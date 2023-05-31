CC	= gcc
CFLAGS	= -O2
WFLAGS	= -Wall -Wextra -Werror

SRC	= echo.c
BIN	= echo
OBJ	= $(SRC:%.c=%.o)


default: all

all:
	@echo "Compiling echo"
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(WFLAGS)

echo.o: echo.c

%.o: %.c

run: all
	./$(BIN)

clean:
	-rm -f $(BIN)
	-rm -f $(OBJ)


.PHONY: default all run clean

