#include <string.h>
void main()
{
 int l, d, r, i;
 char b[10];
 clrscr();
 printf("\n Enter integer decimal number: ");
 scanf("%d", &d);
 i = 0;
 l = 0;
 while( d != 0)
 {
  r = d % 2;
  b[i] = (char) r;
  d = d / 2;
  i++;
  l++;
 }
 b[i] = '\0';
 printf("%d %c %c %c %c %c %d ", i, b[0], b[1], b[2], b[3], b[4], strlen(b));
 getch();
// strrev(b);
/*
l--;
for(i=l; i>=0; i--)
 printf("%d ", b[i]);
// printf("\n Binary Equivalent is: %s", b);
 */

 getch();
}