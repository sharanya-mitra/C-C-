#include<stdio.h>
#include<stdlib.h>
// #include<time.h> 
// malloc()  malloc retun a void pointer so we have to type cast
// calloc()  calloc retun a void pointer and all elemet are 0  
// reallock()reallocked the size of old  
// free() use to free the memory
int main(){
    int *ptr,*ptr2,a;
    printf("Enter Size of the array : ");
    scanf("%d",&a);
    // ptr = (int*) calloc(a,sizeof(int));
    ptr = (int*)malloc(a*sizeof(int));
    for(int i=0;i<a;i++)
    {  // ptr2 = (int*)malloc(150000*sizeof(int));
        printf("\nEnter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    for(int i=0;i<a;i++)
    {
        printf(" \nThe value of %d element is : %d ",i+1,ptr[i]);
     
    }
    free(ptr);//use to free the memory
    ptr = realloc(ptr,a*sizeof(int));
    for(int i=0;i<a;i++)
    {
        printf("\nEnter the value of %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    for(int i=0;i<a;i++)
    {
        printf(" \nThe value of %d element is : %d ",i+1,ptr[i]);
     
    }
return 0;
}
int main() {
    int* nums = (int*) malloc(10 * sizeof(int));
    char c;
    
    for(int i = 0; i < 10; i++)
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", *(nums+i));
    
    return EXIT_SUCCESS;
}