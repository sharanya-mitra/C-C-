#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50],i,j,l,flag=1;
	printf("Enter any string : ");
	gets(str);
	for(l=0;str[l]!='\0';l++);
	for(i=0,j=l-1;i<=l/2-1;i++,j--)
		if(str[i]!=str[j] && str[i]!=str[j]+32 && str[i]!=str[j]-32)
			flag=0;
	if(flag==1)
		printf("\n\nThe given string is a palindrome.");
	else
		printf("\n\nThe given string is not a palindrome.");
	getch();
}
