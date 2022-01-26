#include<stdio.h>
#include<conio.h>
int main()
{ long int i,n,f=1;
  printf("Enter any integer :");
  scanf("%ld",&n);
  
  if(n>0)
   { for(i=1;i<=n;i++)
          f=f*i;
	}
     printf("The factorial of %ld is %ld",n,f);
 getch();	   
}

