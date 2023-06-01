#include <stdio.h>
#include <dirent.h>
#include <string.h>

#define MAX_ITEMS 100

/* swap elements j and j in array */
void swap(char *v[], int i, int j)
{
  char *temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

/* strcmp quicksort */
void quicksort(char *v[], int left, int right)
{
  int i, last;

  if (left >= right)
    return;

  swap(v, left, (left + right) / 2);
  last = left;
  for (i = left + 1; i <= right; ++i)
    if (strcmp(v[i], v[left]) < 0)
      swap(v, ++last, i);
  swap(v, left, last);

  quicksort(v, left, last - 1);
  quicksort(v, last + 1, right);
}

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

  quicksort(lineptr, 0, i - 1);

  for(int j = 0; j < i; ++j)
    printf("%s\n", lineptr[j]);

  if (i == MAX_ITEMS)
    fprintf(stderr, "Application warning: output cut off because max number of items reached");

  return 0;
}
