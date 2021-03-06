// Dr. R. M. Patil
// pol01.c
// Array implementation of Polynomial Addition
// AcceptPoly(), DisplayPoly() & AddPoly()

#include <stdio.h>
#include <conio.h>

#define MAX 25

typedef struct
{
 float coeff[MAX + 1];
 int exp;
} poly;

void AcceptPoly(poly *);
void InitPoly(poly *);
void DisplayPoly(poly);
void AddPoly(poly, poly, poly *);
int MaxPoly(int, int);

void main()
{
 poly p1, p2, p3;
 clrscr();
 printf("\n Enter the First Polynomial with Coefficients and Exponents ");
 AcceptPoly(&p1);
 printf("\n Enter the Second Polynomial with Coefficients and Exponents ");
 AcceptPoly(&p2);
 AddPoly(p1, p2, &p3);
 printf("\n\n The First Polynomial is - ");
 DisplayPoly(p1);
 printf("\n\n The Second Polynomial is - ");
 DisplayPoly(p2);
 printf("\n\n The Addition of two Polynomials is - ");
 DisplayPoly(p3);
 getch();
}

void AcceptPoly(poly *p)
{
 int i;
 InitPoly(p);
 printf("\n Enter the Maximum Degree of Polynomial ");
 scanf("%d", &p->exp);
 for (i = p->exp; i >= 0; i--)
 {
  printf("\n Enter Coefficient[%d] ",i);
  scanf("%f", &p->coeff[i]);
 }
}

void InitPoly(poly *p)
{
 int i;
 for ( i = 0; i <=MAX; i++)
  p->coeff[i] = 0;
 p->exp = 0;
}

void DisplayPoly(poly p)
{
 int i = 0;
 printf("\n");
 for (i = p.exp; i >= 0; i--)
 {
  if (p.coeff[i] > 0)
   printf(" +%fx^%d", p.coeff[i], i);
  else if (p.coeff[i] < 0)
   printf(" %fx^%d", p.coeff[i], i);
 }
}

void AddPoly(poly p1, poly p2, poly *p3)
{
 int i;
 InitPoly(p3);
 p3->exp = MaxPoly(p1.exp, p2.exp);
 for ( i = 0; i <= p3->exp; i++)
  p3->coeff[i] = p1.coeff[i] + p2.coeff[i];
}

int MaxPoly(int exp1, int exp2)
{
 if ( exp1 > exp2)
  return exp1;
 else
  return exp2;
}

