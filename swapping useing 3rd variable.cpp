#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,c;
  printf("Enter the 1st number :");
  scanf("%d", &a);
  printf("Enter the 2nd number :");
  scanf("%d", &b);
  printf("\n\nBefore swapping the number is :%d \t\t %d",a,b);
  c=a;
  a=b;
  b=c;
  printf("\n\nAfter swapping the number is :%d \t\t %d",a,b);
  return(0); 
}
