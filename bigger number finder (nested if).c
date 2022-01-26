#include<stdio.h>
#include<conio.h>
int main()
{ int y,x;
  printf("Enter the two number (give a gape of each number) :");
  scanf("%d %d",&y,&x);
  if(x>y)
  printf("The bigger number is =%d",x);
  else
  { if(x<y)
    printf("The bigger number is =%d",y);
    else
    printf("The both number is equal");
  }
  return(0);
}
