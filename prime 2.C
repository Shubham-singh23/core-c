#include <stdio.h>
#include <conio.h>
void main()
{
 int n, i;
 clrscr();
 printf("\n Enter any integer number: ");
 do
  scanf("%d", &n);
 while(n < 2);
 for(i = 2; i < n; i++)
  if (n % i == 0)
   printf("\n %d is not a Prime Number", n);
 else
  printf("%d IS A PRIME", n);
 getch();
}