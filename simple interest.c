#include<stdio.h>
#include<conio.h>
int main()
{ float p,r,t,i;
  printf("Enter the principal amount :\n\n\n");
  scanf("%f",&p);
  printf("Enter the rate of interest :\n\n\n");
  scanf("%f",&r);
  printf("Enter the time period :\n\n\n");
  scanf("%f",&t);
  i=(p*r*t)/100;
  printf("Your payable ammount is %f",p+i);
  getch();
  return 0;
}

