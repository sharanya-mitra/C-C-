#include<stdio.h>
#include<conio.h>
int main()
{
	int ar[10],se,i;
	printf("Enter 10 integers : ");
	for(i=0;i<=9;i++)
		scanf("%d",&ar[i]);
	printf("\n\nEnter the element to be searched : ");
	scanf("%d",&se);
	for(i=0;i<=9;i++)
	{
		if(se==ar[i])
			break;
	}
	if(i<=9)
		printf("\n\nThe element %d is present in the array at position %d",se,i+1);
	else
		printf("\n\nThe element %d is not present in the array.");
	getch();
}
