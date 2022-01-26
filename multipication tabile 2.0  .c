#include<stdio.h>


#define COLMAX 10
#define ROWMAX 10

main()
{ 
  char a;
  int r,c,y;
  r=1;
  printf("\n        MULTIPLICATION TABLE        \n");
  printf("------------------------------------------ \n");
  do
  
  {
    c=1;
	 
	do
	  {
	  	y=r*c;
	  	printf("%4d",y);
	  	c=c+1;
	  	
		}	 
	    while(c<=COLMAX);
		
		printf("\n");
		
		 r=r+1;	
  }
  
  while(r<=ROWMAX);
  
  printf("------------------------------------------");
  
  
  a=getchar();
  
 }
