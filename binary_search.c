#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[40],n,l,u,mid,i,se,flag=0;
	printf("Enter how elements you want to work with : ");
	scanf("%d",&n);
	printf("\n\nPlease enter %d elements in sorted order : \n\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("\n\nEnter the element to search : ");
	scanf("%d",&se);
	l=0;
	u=n-1;
	while(l<=u)
	{
		mid = (l+u)/2;
		if(ar[mid]==se)
		{
			//flag=1;
			break;
		}
		else if(se<ar[mid])
			u=mid-1;
		else
			l=mid+1;
	}
	if(l<=u)
		printf("\n\nThe element %d is present in the array",se);
	else
		printf("\n\nThe element %d is not present in the array",se);
	getch();
}


