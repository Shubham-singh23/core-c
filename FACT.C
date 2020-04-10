#include <stdio.h>
#include <conio.h>
void main()
{
 int n, f, i;
 clrscr();
 printf("\n Enter any integer number: ");
 do
  scanf("%d", &n);
 while(n < 0);
 f = 1;
 for(i = 1; i <= n ; i++)
  f = f * i;
 printf("\n Factorial(%d) = %d", n, f);
 getch();
}