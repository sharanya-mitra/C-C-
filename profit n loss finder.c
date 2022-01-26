#include<stdio.h>
#include<conio.h>
int main()
{ float s,c;
  printf("enter the sale price:");
  scanf("%f",&s);
  printf("enter the cost price:");
  scanf("%f",&c); 
  if(s>c)
  printf("The salesman incurred a profit of RS %f",s-c);
  else 
  printf("The salesman incurred a loss of RS %f",c-s);
  return(0);
}
