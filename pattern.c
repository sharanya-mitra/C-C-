#include<stdio.h>
#include<conio.h>
int main()
{  double sum=0,b,i=3,n;
   printf("Enter the range :");
   scanf("%lf",&n);
   for(b=1;b<=n;b++)
   { sum=i+sum;
     i=(i*10)+3;
     printf("%.0lf \n",sum);
     sum=0;
   }
   getch();
}
