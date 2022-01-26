// member access operator 
#include<stdio.h>
#include<string.h>

union student
 {   float marks;
     int id;
     char name[45];
 }sl;
int main()
{union student sl;
 strcpy(sl.name,"Sharanya");
 sl.marks = 45.67;
 sl.id =1;
 
 printf("The id is %d \n",sl.id);
 printf("The marks is %f \n",sl.marks);
 printf("The name is %s \n",sl.name);

 return 0;
}
