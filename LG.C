void main()
{
 int m = 12, n = 18, g, l, r, x, y;
 clrscr();
 x = m;
 y = n;
 do
 {
  r = m % n;
  if (r == 0)
   break;
  m = n;
  n = r;
 } while(1);
 g = n;
 printf("\n G. C. D. = %d", n);
 printf("\n L. C. M. = %d", x * y / g);
 getch();
}