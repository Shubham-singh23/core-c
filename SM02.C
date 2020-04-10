// Dr. R. M. Patil
// dssm02.c
// Addition of Sparse Matrix using Array

#include <stdio.h>
#include <conio.h>

#define NTERM 25

void InputMatrix(int [][3]);
void DisplayMatrix(int [][3]);
void AddMatrix(int [][3], int [][3], int [][3]);

void main()
{
 int m1[NTERM+1][3], m2[NTERM+1][3], m3[NTERM+1][3];
 clrscr();
 printf("\n Enter First sparse matrix -");
 InputMatrix(m1);
 printf("\n Enter Second sparse matrix -");
 InputMatrix(m2);

 printf("\n The entered sparse matrix is -");
 DisplayMatrix(m1);
 printf("\n The entered sparse matrix is -");
 DisplayMatrix(m2);

 AddMatrix(m1, m2, m3);
 printf("\n Addition of the two sparse matrix is -");
 DisplayMatrix(m3);
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
 int r, e;
 e = m[0][2];
 printf("\n _________________________________________");
 printf("\n");
 for(r = 0; r <= e; r++)
  printf("\n \t %d \t %d \t %d", m[r][0], m[r][1], m[r][2]);
 printf("\n _________________________________________");
}

void AddMatrix(int m1[][3], int m2[][3], int a[][3])
{
 int r, e1, e2;
 if ( m1[0][0] != m2[0][0] || m1[0][1] != m2[0][1] )
 {
  printf("\n Order Mismatch");
  return;
 }
 a[0][0] = m1[0][0];
 a[0][1] = m1[0][1];
 e1 = 1;
 e2 = 1;
 r = 0;
 while (e1 <= m1[0][2] && e2 <=  m2[0][2])
 {
  r++;
  if (m1[e1][0] == m2[e2][0])
  {
   if (m1[e1][1] == m2[e2][1])
   {
    a[r][0] = m1[e1][0];
    a[r][1] = m1[e1][1];
    a[r][2] = m1[e1][2] + m2[e2][2];
    e1++;
    e2++;
   }
   else if (m1[e1][1] < m2[e2][1])
   {
    a[r][0] = m1[e1][0];
    a[r][1] = m1[e1][1];
    a[r][2] = m1[e1][2];
    e1++;
   }
   else
   {
    a[r][0] = m2[e2][0];
    a[r][1] = m2[e2][1];
    a[r][2] = m2[e2][2];
    e2++;
   }
  }
  else if (m1[e1][0] < m2[e2][0])
  {
   a[r][0] = m1[e1][0];
   a[r][1] = m1[e1][1];
   a[r][2] = m1[e1][2];
   e1++;

  }
  else
  {
   a[r][0] = m2[e2][0];
   a[r][1] = m2[e2][1];
   a[r][2] = m2[e2][2];
   e2++;
  }
 }
 while (e1 <= m1[0][2])
 {
  r++;
  a[r][0] = m1[e1][0];
  a[r][1] = m1[e1][1];
  a[r][2] = m1[e1][2];
  e1++;
 }

 while ( e2 <= m2[0][2])
 {
  r++;
  a[r][0] = m2[e2][0];
  a[r][1] = m2[e2][1];
  a[r][2] = m2[e2][2];
  e2++;
 }
 a[0][2] = r;
}

