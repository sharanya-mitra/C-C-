#include<stdio.h>
#include<conio.h>
int main()
{int a,b;
printf("Enter the four digit number :");
scanf("%d",&a);
printf("The first digit is:%d",a/1000);
printf("\n\nThe last digit is:%d",a%10);
return(0);
}
