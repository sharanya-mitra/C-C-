#include<stdio.h>
#include<conio.h>
int main()
{ int ar[10],i;
  printf("Enter 10 integer :");
  for(i=0;i<=9;i++)
    scanf("%d",&ar[i]);
    
  printf("The array elements in reverse order are :");
  
  for(i=9;i>0;i--)
    printf(" %d ",ar[i]);
    
  getch();  
  return(0);
}
