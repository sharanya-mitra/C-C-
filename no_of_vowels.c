#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[50],i,cnt=0;
	printf("Enter any string : ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
		if(str1[i]=='a' || str1[i]=='A' || str1[i]=='e' || str1[i]=='E' || str1[i]=='i' || str1[i]=='I' || str1[i]=='o' || str1[i]=='O' || str1[i]=='u' || str1[i]=='U')
			cnt++;
	printf("\n\nNumber of vowels present in the given string is %d",cnt);
	getch();
}
