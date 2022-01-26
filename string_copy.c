#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[50],str2[50],i;
	printf("Enter any string : ");
	gets(str1);
	printf("\n\nCopying...Press any key...");
	getch();
	for(i=0;str1[i]!='\0';i++)
		str2[i]=str1[i];
	printf("\n\nThe copied string is : %s",str2);
	getch();
}
