#include<stdio.h>
int main(){
 int arr[30],i,n;
 printf("Enter size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++);
 {
    printf("Enter the element %d\t\n",i);
    scanf("%d",&arr[i]);

 }
  for(int i=0;i<n;i++);
 {
    printf("the element %d\t\n",arr[i]);
 }
return 0;
}