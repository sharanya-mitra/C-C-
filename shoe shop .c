#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,e,d,y,c,m ;
  printf("welcome to the super shoe shop ");
  printf("|*company* | *company`s discount* |");
  printf("|1 Ajanta   |          10%         |");
  printf("|2 Titas    |           5%         |");
  printf("\n\n Enter how many shoe you want to buy :-");
  scanf("%d",&a);
  if(a=1)
   { printf("The choosen company`s name :");
     scanf("%d",&c);
     if(c=1)
     { printf("Enter the cost :");
       scanf("%d",&b);
       d=b*0.1;
       printf("your total is:%d",d);
     }
     
   else if(a=2)
   printf("The two choosen company`s name :");
     scanf("%d %d",&c,&m);
     if(c==2||c==1 && m==1||m==2)
     { printf("Enter the cost :");
       scanf("%d %d",&b,&e);
       if(c==ajanta&&i==titas)
       d=b*0.1;
       y=e*0.05;
       
       else
       d=b*0.05;
       y=e*0.1;
       
       printf("the total cost is %d",d+y);
     }
  
  
}
