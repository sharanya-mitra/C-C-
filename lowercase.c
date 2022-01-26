#include<stdio.h>
#include<conio.h>
int main()
{
	char str[50],i;
	printf("Enter any string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
	}
	printf("\n\nThe given string in lowercase : %s",str);
	getch();
}
