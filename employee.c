#include<stdio.h>
#include<string.h>
int main(){
typedef struct employee
{
  char name[40];
  int id;
  float salary;
}money;


FILE *ptr;
money emp[40];

int n;
char nam[40];

printf("Enter the number of employee: ");
scanf("%d",&n);

ptr =fopen("salary.txt","w");

fprintf(ptr,"ID\tName\t\tSalary\n");

for(int i=0;i<n;i++)
{ 
  printf("Enter the name of the employee :");
  scanf("%s",nam);
  int len = strlen(nam); 
  strcpy(emp[i].name,nam);
  printf("Enter the salary of that persion :");
  scanf("%f",&emp[i].salary);
  emp[i].id=i+1;
  fprintf(ptr,"%d\t%s",emp[i].id,emp[i].name);
  for(int j=0;j<(12-len);j++)
  {
      fprintf(ptr," ");
  }
  fprintf(ptr,"%f\n",emp[i].salary);
  
}
fclose(ptr);
return 0;
}

