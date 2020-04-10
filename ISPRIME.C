#include <stdio.h>
#include <conio.h>
void main()
{
 int n, i, prime;
 clrscr();
 printf("\n Enter any integer number: ");
 do
  scanf("%d", &n);
 while(n < 2);
 prime = 1;
 for(i = 2; i < n; i++)
  if (n % i == 0)
   {
    prime = 0;
    break;
   }
 if (prime)
  printf("\n %d is a Prime Number", n);
 else
  printf("%d IS NOT A PRIME", n);
 getch();
}