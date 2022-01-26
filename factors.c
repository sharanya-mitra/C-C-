#include<stdio.h>
#include<conio.h>
int main()
{int i,a;
 printf("Enter the number :");
 scanf("%d",&a);
 printf("\n\n The factors of the given number is :");
 i=1;
while(i<=a)
{if(a%i==0) 
 {
   printf("\t\t%d",i);
 }
 i=i+1;
}
 return(0);
 getch();
}
