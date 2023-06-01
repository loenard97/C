#include <stdio.h>

/* print contents of file or stdin to stdout*/
int main(int argc, char **argv)
{
  char c;
  FILE *file;

  file = (argc > 1) ? fopen(argv[1], "r") : stdin;

  while((c = getc(file)) != EOF)
    putchar(c);

  return 0;
}
