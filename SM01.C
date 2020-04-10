// Dr. R. M. Patil
// sm01.c
// Transpose of Sparse Matrix using Array

#include <stdio.h>
#include <conio.h>

#define NTERM 25

void InputMatrix(int [][3]);
void DisplayMatrix(int [][3]);
void TransposeMatrix(int [][3], int [][3]);

void main()
{
 int m1[NTERM+1][3], m2[NTERM+1][3];
 clrscr();
 InputMatrix(m1);
 printf("\n The entered sparse matrix is -");
 DisplayMatrix(m1);

 TransposeMatrix(m1, m2);
 printf("\n The Transpose of sparse matrix is -");
 DisplayMatrix(m2);
 getch();
}

void InputMatrix(int m[][3])
{
 int r;
 printf("\n Enter number of Rows in the Sparse Matrix");
 scanf("%d", &m[0][0]);
 printf("\n Enter number of Columns in the Sparse Matrix");
 scanf("%d", &m[0][1]);
 printf("\n Enter number of non-zero entries in the Sparse Matrix");
 scanf("%d", &m[0][2]);
 for(r = 1; r <= m[0][2]; r++)
 {
  printf("\n Enter the Row Number ");
  scanf("%d", &m[r][0]);
  printf("\n Enter the Column Number ");
  scanf("%d", &m[r][1]);
  printf("\n Enter the Value ");
  scanf("%d", &m[r][2]);
 }
}

void DisplayMatrix(int m[][3])
{
 int r;
 printf("\n _________________________________________");
 printf("\n");
 for(r = 0; r <= m[0][2]; r++)
  printf("\n %d \t %d \t %d", m[r][0], m[r][1], m[r][2]);
 printf("\n _________________________________________");
}

void TransposeMatrix(int m[][3], int o[][3])
{
 int r, c, e;
 o[0][0] = m[0][1];
 o[0][1] = m[0][0];
 o[0][2] = m[0][2];
 r = 1;
 for ( c = 0; c < m[0][1]; c++)
  for ( e = 1; e <= m[0][2]; e++)
  {
   if ( m[e][1] == c)
   {
    o[r][0] = m[e][1];
    o[r][1] = m[e][0];
    o[r][2] = m[e][2];
    r++;
   }
  }
}