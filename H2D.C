#include <math.h>
#include <string.h>
void main()
{
 char h[7];
 int t, i, sum, p, r, l;
 clrscr();
 printf("\n Enter any integer Hex number: ");
 scanf("%s", &h);
 sum = 0;
 p = 0;
 l = strlen(h);
 for(i = l-1; i >= 0; i--)
 {
  if (h[i] <= 57 )
    t  = h[i] - 48;
   else
    t = h[i] - 55;
  sum += t * pow(16, p);
  p++;
 }
 printf("\n Decimal Number is: %d", sum);
 getch();
}