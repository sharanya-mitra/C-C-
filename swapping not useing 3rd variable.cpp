#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
  printf("Enter the two number :");
  scanf("%d %d",&a,&b);
  printf("\n\nBefore swappping a=%d and b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n\nAfter swappping a=%d and b=%d",a,b);
  return(0);
}
