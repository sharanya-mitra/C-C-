#include<stdio.h>
#include<conio.h>
int main()
{ int x,y,r;
  printf("Enter the two number ");
  scanf("%d %d",&x,&y);
  if(x>y)
  {r=x;
   x=y;
   y=r; 
  }
  r=y%x;

  while(r!=0)
  {x=r;
   y=x;
   r=y%x;
  }
  printf("The hcf of two number is : %d",x);
  getch();
}
