void main()
{
 int n1, n2, n3, i, n;
 clrscr();
 n1 = 0;
 n2 = 1;
 printf("\n Enter Range: ");
 do
  scanf("%d", &n);
 while(n<3);
 printf("\n Fibonnaci Series: \n");
 printf("%d \t %d \t", n1, n2);
 for(i = 3; i <= n; i++)
 {
  n3 = n1 + n2;
  printf(" %d \t", n3);
  n1 = n2;
  n2 = n3;
 }
 getch();
}