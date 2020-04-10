#include <math.h>
void main()
{
 int b;
 int sum, p, r;
 clrscr();
 printf("\n Enter any integer binary number: ");
 scanf("%d", &b);
 sum = 0;
 p = 0;
 while(b != 0)
 {
  r = (int) b % 10;
  sum += r * pow(2, p);
  b /= 10;
  p++;
 }
 printf("\n Decimal Number is: %d", sum);
 getch();
}