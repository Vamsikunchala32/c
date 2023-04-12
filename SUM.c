#include<stdio.h>
#include<conio.h>
void
main ()
{
  int num, rem, sum = 0, i;
  printf ("Enter a number\n");
  scanf ("%d", &num);
  while (num > 0)
    {

      rem = num % 10;

      sum = sum + rem;

      num = num / 10;
    }

  printf ("the sum of digitsB %d", sum);

}
