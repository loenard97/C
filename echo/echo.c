#include <stdio.h>

/* print argv to stdout */
int main(int argc, char **argv) {
  int i;
  for (i = 1; i < argc; ++i)
    printf("%s%c", argv[i], (i == argc - 1) ? '\n' : ' ');

  return 0;
}
