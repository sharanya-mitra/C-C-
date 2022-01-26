#include<stdio.h>
#include<conio.h>
int main()
{ int n,ar[50],i,oc=0,ec=0;
  printf("Enter no elements to work with : ");
  scanf("%d",&n);
  printf("Enter %d integer :",n);
    for(i=0;i<n;i++)
       scanf("%d",ar+i);
    for(i=0;i<n;i++)
      { if(ar[i]%2==0)
           ec=ec+ar[i];
        else
           oc=oc+ar[i];
      }
   printf("The sum odd number is :%d\n The sum even number is :%d",ec,oc);
 getch();  
}
