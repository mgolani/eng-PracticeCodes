//WAP to find the given number is power of 2 or not.

#include <stdio.h>
int main () {
 unsigned  int Num;

  printf ("Enter Bumber\n");
  scanf ("%d", &Num);

  (Num & Num-1) ? printf("Not Power of 2\n") : printf("Power of 2\n");

  return 0;
}
