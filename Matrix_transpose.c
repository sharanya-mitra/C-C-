#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[10][10],tran[10][10],i,j,m,n;
	printf("Enter the order of the matrix : ");
	scanf("%d,%d",&m,&n);
	printf("\n\nFor the matrix : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n\nEnter element for row %d, column %d : ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n\nThe given matrix is : \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d  ",mat[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			tran[j][i] = mat[i][j];
		}
	}
	printf("\n\nThe transpose matrix is : \n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%4d  ",tran[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
