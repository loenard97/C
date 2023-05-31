#include <stdio.h>
#include <time.h>

/* print current system time to stdout */
int main()
{
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
  printf("%s", asctime(timeinfo));

	return 0;
}

