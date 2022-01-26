#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,d,e,f,g;
 float per;
  printf("Enter the number of the subject English");
  scanf("%d",&a); 
  printf("Enter the number of the subject Bengali");
  scanf("%d",&b);
  printf("Enter the number of the subject mathametics");
  scanf("%d",&c);
  printf("Enter the number of the subject physics");
  scanf("%d",&d);
  printf("Enter the number of the subject chemistry");
  scanf("%d",&e);
  printf("Enter the number of the subject computer science");
  scanf("%d",&f);
  if(c<d && c<e && c<f)
  g=a+b+d+e+f;
  else if(d<c && d<e && d<f)
  g=a+b+c+e+f;
  else if(e<c && e<d && e<f)
  g=a+b+d+c+f;
  else
  g=a+b+d+e+c;
  
  printf("\nThe student's best of five marks is =%d/500",g);
  per=g/5;
  printf("\nThe student's percentage is =%.2f %",per);
  if(per>35)
  printf("\nREMARK=pass");
  else
  printf("\nREMARK=fail");
  return(0); 
}
