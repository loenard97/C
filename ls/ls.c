#include <stdio.h>
#include <dirent.h>
#include <string.h>

#define MAX_ITEMS 100

/* print dir names to stdout */
int main(int argc, char **argv)
{
  int i = 0;
  struct dirent *d;
  DIR *dh;
  char *lineptr[MAX_ITEMS];

  dh = (argc > 1) ? opendir(argv[1]) : opendir(".");

  if (dh == NULL)
  {
    fprintf(stderr, "Application error: could not open directory");
    return 1;
  }

  while((d = readdir(dh)) != NULL)
  {
    if (i == MAX_ITEMS)
      break;
    lineptr[i] = d->d_name;
    ++i;
  }

  for(int j = 0; j < i; ++j)
    printf("%s\n", lineptr[j]);

  if (i == MAX_ITEMS)
    fprintf(stderr, "Application warning: output cut off because max number of items reached");

  return 0;
}
