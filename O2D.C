#include <math.h>
void main()
{
 int o;
 int sum, p, r;
 clrscr();
 printf("\n Enter any integer octal number: ");
 scanf("%d", &o);
 sum = 0;
 p = 0;
 while(o != 0)
 {
  r = o % 10;
  sum += r * pow(8, p);
  o /= 10;
  p++;
 }
 printf("\n Decimal Number is: %d", sum);
 getch();
}