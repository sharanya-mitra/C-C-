#include<stdio.h>
#include<conio.h>
int main()
{ int x,y,r;
  printf("Enter the two numbers : ");
  scanf("%d %d",&x,&y);
  if(x>y)
  {r=x;
   x=y;
   y=r; 
  }
  r=y%x;

  while(r!=0)
  {y=x;
   x=r;
   r=y%x;
  }
  printf("The greatest common divisor of two number is : %d",x);
  getch();
}
