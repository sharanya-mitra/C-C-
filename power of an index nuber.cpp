#include<stdio.h>
#include<conio.h>
int main()
{ int x,y,p=1,i=0;
 printf("Enter base value :");
 scanf("%d",&x);
 printf("Enter index value :");
 scanf("%d",&y);
 while(i<=y)
 { p=p*x;
   ++i;
 }
 printf("The result is %d",p);
getch(); 
}
