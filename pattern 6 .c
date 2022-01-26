#include<stdio.h>
#include<conio.h>
int main()
{ int n,i,j,k;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { printf("\t");
    for(j=1;j<=(n-i);j++)
      printf(" ");
    for(k=1;k<=2*i-1;k++)
      printf("*");
   printf("\n");
  }
  getch();
}
