#include<stdio.h>
#include<conio.h>
int main()
{ int n,s=0;
  printf("Enter value of n :");
  scanf("%d",&n);
  printf("\n\n The sum of %d natural number is =\n\n",n);
  while(n>=1)
  {s=s+n;
   n=n-1;
  }
  printf("%d",s);
  return(0);
  getch();
}
