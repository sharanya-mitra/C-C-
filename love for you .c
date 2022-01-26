#include<stdio.h>
#include<conio.h>
int main()
{ int i,j,n=5;

  for(i=n/2;i<=n;i=i+2)
  {
     for(j=1;j<=n;j=j+2)
       printf(" ");
   
     for(j=1;j<=i;j++)
       printf("*");
	
	
     for(j=1;j<=n;j++)
        printf(" ");
      
     for(j=1;j<=i;j++)
	    printf("*");
	    
	printf("\n");    
  }
  
  for(i=n;i>=1;i++)
  {
  	for(j=i;j<n;j++)
  	  printf(" ");
  	  
   printf("\n");  
  }
  getch();
}

