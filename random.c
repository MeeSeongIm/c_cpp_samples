#include <stdio.h>      // printf, NULL
#include <stdlib.h>     // srand, rand
#include <time.h>       // time

int main ()
{
  printf ("before initializing srand(time(NULL)): %d\n", rand()%100);
  srand (time(NULL));
  printf ("random number: %d\n", rand()%100);
  srand (1);
  printf ("applied srand (1): %d\n", rand()%100);
  srand (2);
  printf ("applied srand (2): %d\n", rand()%100);
  srand (3);
  printf ("applied srand (3): %d\n", rand()%100);

  srand(time(NULL));
  printf("applied srand(time(NULL)), always the same as the second output: %d\n", rand()%100);
  printf("applied srand(time(NULL)): %d\n", rand()%100);
  printf("applied srand(time(NULL)): %d\n", rand()%100);

  srand(1);
  printf("applied srand(1): %d\n", rand()%100);

  srand (0);
  printf ("applied srand (0): %d\n", rand()%100);
  srand (-1);
  printf ("applied srand (-1): %d\n", rand()%100);

  return 0;
}


