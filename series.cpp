#include<stdio.h>
#include<conio.h>
int main()
{ int i,n;
   printf("Enter the number ");
   scanf("%d",&n);
   if(n%2!=0)
    
	n=n+1;
   for(i=1;i<=16;i++)
    { 
	printf("%d   %d \n",n,(n+2));
	n=n+2;
	;
    }
  getch();

