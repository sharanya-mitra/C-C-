#include<stdio.h>
#include<conio.h>
void main()
{ int ar[15],i,s,l;
 printf("Enter 15 diffrent integer");
 for(i=0;i<15;i++)
    scanf("%d",ar+i);  
 l=s=0;
 for(i=0;i<15;i++)
  { if(ar[i]>ar[l])
       l=i;
    if(ar[i]<ar[s])
       s=i;
  }
 printf("The largest element is %d,present in position %d\nThe lowest element is %d,present in position %d",ar[l],l+1,ar[s],s+10);
 getch();
}
