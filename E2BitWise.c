#include <stdio.h>
#include <conio.h>
void disp_bits(unsigned);
void main()
{
  unsigned int no1 = 9, no2 = 10;
  clrscr();
  printf("\n Size of unsigned %u", sizeof(no1));
  printf("\n Enter value for Number 1: ");
  //scanf ("%u", &no1);
  disp_bits(no1);
  printf("\n Enter value for Number 2: ");
  //scanf ("%u", &no2);
  disp_bits(no2);
  getch();
  printf("\n Bitwise & operator ");
  disp_bits(no1 & no2);
  printf("\n Bitwise | operator ");
  disp_bits(no1 | no2);
  printf("\n Bitwise ^ operator ");
  disp_bits(no1 ^ no2);
  printf("\n Bitwise ~ operator ");
  disp_bits(~no1);
  printf("\n no2 = ");
  disp_bits(no2);
  printf("\n Left Shift operator ");
  disp_bits(no2<<1);
  printf("\n Right Shift operator ");
  disp_bits(no2>>1);
  getch();
}
void disp_bits(unsigned u)
{
 int i;
 unsigned m = 1 << 15;
 printf("\n %u \n", u);
 for(i=1; i<= 16; i++)
 {
  putchar(u & m ? '1' : '0');
  u <<= 1;

  if(i % 8 == 0)
   putchar(' ');
 }
}

