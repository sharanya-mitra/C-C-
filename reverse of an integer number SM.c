#include<stdio.h>
#include<conio.h>
int main()
{ int a,sum=0,num;
 printf("Enter the number :");
 scanf("%d",&a);
 while(a>0)
 { num=a%10; 
   sum=sum*10+num;
   a=a/10;
 
}
printf("The reverse number is %d",sum);
getch();
return(0);
}
