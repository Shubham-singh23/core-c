#include <stdio.h>
#include <conio.h>
void main()
{
 long int n, i, sum;
 clrscr();
 printf("\n Perfect Numbers from 2 till 10000 are:\n");
 for (n = 1; n <= 10000; n++)
 {
  sum = 0;
  for(i = 1; i < n; i++)
   if (n % i == 0)
    sum += i;
  if (n == sum)
   printf("%ld \t", n);
 }
 printf("\n Execution is Over");
 getch();
}