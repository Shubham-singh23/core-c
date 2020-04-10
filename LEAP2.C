#include <stdio.h>
#include <conio.h>
void main()
{
 int y;
 clrscr();
 printf("\n Enter any four digit year: ");
 do
  scanf("%d", &y);
 while(y<=999 || y>=9999);
 if (y%4 == 0)
  if (y%100 == 0)
   if (y%400 == 0)
    printf("\n%d is a Leap Year",y);
   else
    printf("\n%d is NOT A LEAP YEAR",y);
  else
   printf("\n%d is a Leap Year", y);
 else
  printf("\n%d is NOT A LEAP YEAR", y);
 getch();
}