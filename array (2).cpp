#include<stdio.h>
#include<conio.h>
int main()
{ int n,sum=0,c,a[100];
 printf(" Enter the number of terms");
 scanf("%d",&n);
 printf("\n Enter the number of terms");
 for(c=0;c<n;c++)
  {
  	scanf("%d",&a[c]);
  	sum=sum+a[c];
  }
  printf("sum=%d\n",sum);
  
}
