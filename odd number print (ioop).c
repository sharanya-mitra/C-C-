#include<stdio.h>
#include<conio.h>
int main()
{
	int u,l,i;
	printf("Enter the lower limit number :");
	scanf("%d",&l);
	printf("Enter the upper limit number :");
	scanf("%d",&u);
	if(l%2==0)
	 i=l+1;
	else
	 i=l;
	
	printf("The odd number of the given range is :");
	while(i<=u)
	{ printf("\n %d",i);
	  i=i+2;
	}
  return(0);	 
  getch();	
}
