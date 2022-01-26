#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,x,y,z,k,m; 
 printf("Enter your DOB (yyyy/mm/dd):");
 scanf("%d %d %d",&c,&b,&a);
 printf("Enter your current date (yyyy/mm/dd):-");
 scanf("%d %d %d",&z,&y,&x);
 if(x>a)
  k=x-a;
 else
  k=(30+x)-a;
  y=y-1;
 if(y>b)
  m=(y+1)-b;
 else
 {
  m=(12+y)-b;
  z=z-1; 
 }
printf("Your current age is :year=%d month=%d day=%d",(z-c),m,k);
return(0);
}
printf("The great presion the ");