void main()
{
float a[25][25], b[25][25], c[25][25];
 int i, j, m, n, p, k;
 clrscr();
 printf("\n Enter Rows & Cols of First Matrix: ");
 scanf("%d%d", &m, &p);
 printf("\n Enter Cols of Second Matrix: ");
 scanf("%d", &n);
 for(i=0; i<m; i++)
  for(j=0; j<p; j++)
  {
   printf("\n Enter value for a[%d][%d]: ", i, j);
   scanf("%f", &a[i][j]);
  }
 for(i=0; i<p; i++)
  for(j=0; j<n; j++)
  {
   printf("\n Enter value for b[%d][%d]: ", i, j);
   scanf("%f", &b[i][j]);
  }
 printf("\n Actual First Matrix \n");
 for(i=0; i<m; i++)
 {
  for(j=0; j<p; j++)
   printf("%f \t", a[i][j]);
  printf("\n");
 }
 printf("\n Actual Second Matrix \n");
 for(i=0; i<p; i++)
 {
  for(j=0; j<n; j++)
   printf("%f \t", b[i][j]);
  printf("\n");
 }
 for(i=0; i<m; i++)
  for(j=0; j<n; j++)
   c[i][j] = 0;
 for(i=0; i<m; i++)
  for(j=0; j<n; j++)
   for(k=0; k<p; k++)
   c[i][j] += a[i][k]*b[k][j];
 printf("\n Transopse Matrix \n");;
 for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
   printf("%f \t", c[i][j]);
  printf("\n");
 }
 getch();
}