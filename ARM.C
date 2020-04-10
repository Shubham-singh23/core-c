#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
 int i, n, t, r, d, sum;
 clrscr();
 printf("\n Armstrong Numbers 1 till 10000\n");
 for(i=1; i <= 10000; i++)
 {
  n = i;
  t = n;
  sum = 0;
  d = 0;
  while(t != 0)
  {
   d++;
   t /= 10;
 }
  while(n != 0)
  {
   r = n % 10;
   sum += pow(r,d);
   n /= 10;
  }
  if (sum == i)
   printf("%d\t", i);
 }
 getch();
}