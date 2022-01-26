#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	printf("\n Enter the number of rows to be printed");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
    {
    	printf("\n");
    	for(j=1;j<=i;j++)
    	{
     	printf("%d ",2*j-1);
     	}
    }
     getch();
}

