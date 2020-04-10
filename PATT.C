#include <stdio.h>
#include <conio.h>
void main()
{
 int i, t, r, c, n;
 clrscr();
 printf("\n Enter Rows: ");
 do
  scanf("%d", &n);
 while(n < 1);
 t = 1;
 for(r=1; r <= n; r++)
 {
  for(c = 1; c <= r; c++)
  {
    printf("%d \t", t);
    t++;
  }
  printf("\n");
 }
 getch();
}