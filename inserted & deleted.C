void main()
{
 int ary[15], i, p, v;
 clrscr();
 for(i = 0; i < 10; i++)
 {
  printf("\n Enter value for ary[%d]", i);
  scanf("%d", &ary[i]);
 }
 printf("\n Array elements are:\n");
 for(i = 0; i < 10; i++)
  printf("%d \t", ary[i]);
 printf("\Enter position where the value is to be inserted: ");
 do
  scanf("%d", &p);
 while(p < 0 || p >= 15);
 printf("\Enter value to be inserted: ");
 scanf("%d", &v);
 for(i = 10; i >= p-1; i--)
  ary[i+1] = ary[i];
 ary[p-1] = v;
 for(i = 0; i < 11; i++)
  printf("%d \t", ary[i]);

 printf("\Enter position to be deleted: ");
 do
  scanf("%d", &p);
 while(p < 0 || p >= 15);
 for(i = p-1; i < 10; i++)
  ary[i] = ary[i+1];
 for(i = 0; i < 10; i++)
  printf("%d \t", ary[i]);
getch();
}