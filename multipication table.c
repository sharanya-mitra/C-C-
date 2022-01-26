#include<stdio.h>
#include<conio.h>
int main()
{ int i,a;
  printf("Enter the number :");
  scanf("%d",&a);
  printf(" \t \n \n The multipication table : \n \n");
  for(i=1;i<=10;i=i+1)
  printf("\n %d X %d =%d ",a,i,a*i);
  return(0);
  getch();
}
