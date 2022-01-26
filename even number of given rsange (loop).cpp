#include<stdio.h>
#include<conio.h>
int main()
{ int i,a,b;
  printf("Enter the number lower limit:");
  scanf("%d",&a);
  printf("Enter the number upper limit :");
  scanf("%d",&b);  
  if(a%2==0)
  a=a;
  else
  a=a+1;
  printf("The even number of given range is \n\n");
  while(a<=b)
  {
  printf(" \n %d",a);
  a=a+2;
  }
  getch();
  return(0);
}

