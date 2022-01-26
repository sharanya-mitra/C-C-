#include<stdio.h>
#include<conio.h>
void swapr(int*,int*);
int areaperi(int,float*,float*);
int sumofelecments(int* a,int size) // "int* A" or "int A[]"  ..it's the same..
{
        int i,sum =0;
        for(i=0;i<size;i++)
        {
                sum+=a[i]; //a[i] is *(a+i)
        }
        return sum; 
}
void Double_Elements(int* A,int size)// "int *A or "int A[]" ... it's the same..
{
        for(int i=0;i<size;i++)
        {
                A[i] = 2*A[i];
        }
}
void print(char*c)
{
        while(*c!='\0')
        {
        printf("%c",*c);
        c++;
        }
        printf("\n");
}
int main()
{
 //     int i=3;//location name is i and the value of location is 3
 //     int *j; //*j is variable which can store other variable adress
 //     j=&i;//j contain the adress of i
    
 //     printf("Address of i=%u\n",&i);
 //     printf("Address of i=%u\n",j);
 //     printf("Address of j=%u\n",&j);
 //     printf("Value of j=%u\n",j);
 //     printf("Value of i=%d\n",i);
 //     printf("Value of i=%d\n",*(&i));
 //     printf("Value of i=%d\n",*j);
        // int i=3,*j,**k;
        // j=&i;
        // k =&j; 
        // printf("Address of i=%u\n",&i);
        // printf("Address of i=%u\n",j);
        // printf("Address of i=%u\n",*k);
        // printf("Adress of j=%u\n",&j);
        // printf("Address of j=%u\n",k);
        // printf("Address of k=%u\n",&k);
        // printf("Address of i=%u\n",j);
        // printf("Value of k=%u\n",k);
        // printf("Value of i=%d\n",i);
        // printf("Value of i=%d\n",*(&i));
        // printf("Value of i=%d\n",*j);
        // printf("Value of i=%d\n",**k);
        // return 0;
        // int a=10,b=20;
        // swapr(&a,&b);
        // printf("a=%d,b=%d",a,b);
 //         int radius;
 //         float area,perimeter;
 //         printf("Enter radius of the circle");
 //         scanf("%d",radius);
  //         areaper(radius,&area,&perimeter);
 //         printf("Area = %f",area);
 //         printf("perimeter = %f",perimeter);
 //         return 0;
 // we can write void pointer it helps us to to store any genereci data type it helps the 
 // but you can't derefarecne in void pointer

  //  int A[] ={1,2,3,4,5};
 //  int size = sizeof(A)/sizeof(A[0]);
 //  int total = sumofelecments(A,size); //A can be used for &A[0] 
 //  printf("Sum of elements = %d\n",total); 
 //  printf("Main - Size of A =%d,size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
//  int A[5] ={1,2,3,4,5};
//  int size = sizeof(A)/sizeof(A[0]);
//  int i;
//  Double_Elements(A,size);
//         for(i=0;i<size;i++)
//         {
//                  printf(" %d ",A[i]);
//         }

char c[]="Hello";
 print(c);

}  
// int areaper(int r, float*a,float*p)
// {
//  *a=3.14*r*r;
//  *p=2*3.12*r;

// }
// void swapr(int*x,int*y)
// {
//         int t;
//         t=*x;
//         *x=*y;
//         *y=t;
// }

