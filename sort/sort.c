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

/* sort argv and print to stdout */
int main(int argc, char **argv)
{
  int i;

  quicksort(argv, 0, argc - 1);

  for (i = 0; i < argc; ++i)
    printf("%s%s", argv[i], (i == argc) ? "" : "\n");

  return 0;
}
