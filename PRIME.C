#include <stdio.h>
#include <conio.h>
void main()
{
 int n, i, prime;
 clrscr();
 printf("\n Prime Numbers from 2 till 100 are:\n");
 for (n = 2; n <= 100; n++)
 {
  prime = 1;
  for(i = 2; i < n; i++)
   if (n % i == 0)
   {
    prime = 0;
    break;
   }
  if (prime)
   printf("%d \t", n);
 }
 getch();
}