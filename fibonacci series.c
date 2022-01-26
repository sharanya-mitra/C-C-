#include<stdio.h>
#include<conio.h>
int main()
{ int x=0,y=1,z,n,i;
  printf("Enter number of terms to be printed: ");
  scanf("%d",&n);
  printf("\n\n The Fibonacci series upto %d terms :\n\n",n);
  for(i=1;i<=n;i++)
  { z=x+y;
    printf(" %d ",z);
    y=x;
    x=z;
  }
  getch();
}
