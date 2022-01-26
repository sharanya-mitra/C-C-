#include<stdio.h>
#include<conio.h>
int main()
{ int a,temp,sum=0,num;
 printf("Enter the number :");
 scanf("%d",&a);
 temp=a;
 while(a>0)
 { num=a%10; 
   sum=sum*10+num;
   a=a/10;
 
}
printf("The reverse number is %d",sum);
if(temp==sum)
printf("\n\nThe number is a palindrome number");
 else
 printf("\n\nThe number is not a palindrome number");
 
 getch();
 return(0);
}
