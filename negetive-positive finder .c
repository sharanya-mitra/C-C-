#include<stdio.h>
#include<conio.h>
int main()
{ int a;
  printf("Enter the number :");
  scanf("%d",&a);
  if(a>0)
    printf("the number is positive"); 
  else 
   if(a==0)
    printf("The number is not negetive nor positive");
   else
    printf("the number is negetive");
	
   getch();
   return(0); 
}
