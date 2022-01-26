#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,max;
  printf("Enter the two number :"); 
  scanf("%d %d",&a,&b);
  if(a>b)
  printf("The max number is:%d",a);
  else if(a==b)
  printf("The both number is equal");
  else
  printf("The max number is:%d",b);
  return(0);
}
