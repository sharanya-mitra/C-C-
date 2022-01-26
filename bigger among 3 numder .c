#include<stdio.h>
#include<conio.h>
int main()
{ int x,y,z;
  printf("Enter the three number with gapes");
  scanf("%d %d %d",&x,&y,&z);
  if(x>y)
  {if(x>z)
   printf("%d is the bigger number ",x);
   else
   printf("%d is the bigger number",z);
  }
  else
  { if(y>z)
    printf("%d is the bigger number ",y);  
    else
	 printf("%d is the bigger number ",z);  
  }
  return (0);
}
