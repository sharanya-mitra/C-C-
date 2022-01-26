#include<stdio.h>
#include<conio.h>
int main()
{ int n,i,j;
  printf("Enter the limit of the range :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { for(j=2;j<=i;j++)
    {if(i%j==0)
    break;
    } 
	    if(j==i)
	     printf(" %d ",i);
	}
  getch();
  return(0);
   
}
