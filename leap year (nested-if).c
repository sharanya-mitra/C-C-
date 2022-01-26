//Sharanya Mitra//
#include<stdio.h>
#include<conio.h>
int main()
{ int a;
  printf("Enter the year :");
  scanf("%d",&a);
  if(a%100==0)
  {
   if(a%400==0)
   printf("The year is leap year");
   else
   printf("The year is not a leap year");
  }
  else
  {
   if(a%4==0)
   printf("The year is leap year");
   else
   printf("The year is not a leap year");

  }
  return(0);
}
