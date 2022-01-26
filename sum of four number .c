#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,d,e;
  printf("Enter the four digit number :");
  scanf("%d",&a);
  b=a/1000;
  c=(a/100)%10;
  d=(a/10)%10;
  e=a%10;
  printf("The sum of four number is %d",b+c+d+e);
  return(0);
}
