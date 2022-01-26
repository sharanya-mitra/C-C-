#include<stdio.h>
#include<conio.h>
 int main()
{  int a,b,c,d,e; 
  
  printf("Enter your bank account no.");  
  scanf("%d",&a);
  if(a==86179)
    {printf("Hi SHARANYA MITRA Welcome to your BANK ACCOUNT \nEnter the password = ");
     scanf("%d",&b);
       if(b==4974)
	   {
	     printf("Your password is wright ");
	     printf("Your current balence is 120090");
	     printf("\nWhat did you want to do now\n\t1.Diposit some money\n\t2.withdrow some money\n\t3.goback\n\n\t\tif you want to start first protocol then press 1\n\n\t\tif you want to start second protocol then press 2\n\n\t\tif you want to start third protocol then press 3     ");
	     scanf("%d",&c);
           if(c==1)
	       {
	           printf("Enter how much do you want to diposit");
	           scanf("%d",&d);
	           e=120090+b;
	           printf("your current balance is %d",e); 
	        }
	        else if(c==2)
	        {
	           printf("Enter how much do you want to withdrow");
	           e=120090-b;
	           scanf("%d",&d);
			   printf("your current balance is %d",e); 
	         }	  
	         else
	         printf("have nice day");
	
               
	           
        }
        else
	    {
	     printf("your password is wrong");
        }
   }
   else
   printf("There no bank account with this password");

return(0);
}

