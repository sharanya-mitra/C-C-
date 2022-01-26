// #include <stdio.h> 
  
// // Function to return sum of 1/1 + 1/2 + 1/3 + ..+ 1/n 
// double sum(int n) 
// { 
//   double i, s = 0.0; 
//   for (i = 1; i <= n; i++) 
//       s = s + 1/i; 
//   return s; 
// } 
// C Implementation for bar3d() function 
// #include <graphics.h> 
  
// // driver code 
// int main() 
// { 
//     // gm is Graphics mode which is 
//     // a computer display mode that 
//     // generates image using pixels. 
//     // DETECT is a macro defined in 
//     // "graphics.h" header file 
//     int gd = DETECT, gm; 
  
//     // initgraph initializes the 
//     // graphics system by loading a 
//     // graphics driver from disk 
//     initgraph(&gd, &gm, ""); 
  
//     // location of sides 
//     int left, top, right, bottom; 
  
//     // depth of the bar 
//     int depth; 
  
//     // top flag denotes top line. 
//     int topflag; 
  
//     // left, top, right, bottom, 
//     // depth, topflag location's 
//     bar3d(left = 150, top = 250, 
//     right = 190, bottom = 350, 
//     depth = 20, topflag = 1); 
  
//     bar3d(left = 220, top = 150, 
//     right = 260, bottom = 350, 
//     depth = 20, topflag = 0); 
  
//     bar3d(left = 290, top = 200, 
//     right = 330, bottom = 350, 
//     depth = 20, topflag = 1); 
  
//     // y axis line 
//     line(100, 50, 100, 350); 
  
//     // x axis line 
//     line(100, 350, 400, 350); 
  
//     getch(); 
  
//     // closegraph function closes the 
//     // graphics mode and deallocates 
//     // all memory allocated by 
//     // graphics system . 
//     closegraph(); 
  
//     return 0; 
// } 
  
// int main() 
// { 
//     int n;
//     printf("Enter the value of n ");
//     scanf("%d",&n); 
//     printf("Sum is %f", sum(n)); 
//     return 0; 
// }
// #include<stdio.h>
// int main()
// {
//   float x,y,i;
//   printf("The ITEM LIST\n\n");
//   printf("ITEM    PRICE\n\n");
//   printf("Rice    RS 16.75/kg\n\n");
//   printf("SUGER   RS 15.50/kg\n\n");   
 
//   printf("Enter the amount of Rice you want to buy in gram\n\n");
//   scanf("%f",&x);
//   printf("Enter ammount of suger that want to buy in gram\n\n");
//   scanf("%f",&y);

// printf("Total cost of your groceries is %f\n\n\n",(x*0.01675)+(y*0.0155));

// }
// #include<stdio.h>
// #define MAX 20
// int mian()
// {int a[MAX],n,i;
//  printf("Enter the lenght of string ");
//  scanf("%d",&n);
// for ( i = 0; i < n; i++)
// {
//     /* code */
//     printf("Enter the number ")
// }
// }
// 2.3 Write a pogram  that use in built function to draw a 3d bar
// #include<stdio.h>
// int main()
// {
//     int i,temp,count;
//     printf("Enter the Number that you wanted to show the table");
//     scanf("%d",&count);
//     for( i = 1; i <=10; i++)
//     {
//         /* code */
//        temp=count*i;
        
//         printf("%d ",count);
//         printf("x %d",i);
//         printf("= %d",temp);
//         printf("\n");
//     }
    
// }
// C program to demonstrate getdate() method 

// #include<stdio.h>
// #include<time.h>

// int main()
// {
//     printf("\n\n\t\tSharanya Mitra\n\n\n");

//     time(&t);

//     printf("\nThis program has been writeen at (date and time): %s", ctime(&t));

//     printf("\n\n\t\t\tCoding is Fun !\n\n\n");
//     return 0;
// }
// 3.5 typedef declaration 

// #include <stdio.h>
// int main() {
// 	typedef unsigned int ui;
// 	ui i = 5, j = 8;
// 	printf("i = %d\n", i);
// 	printf("j = %d\n", j);
// 	return 0;
// }
// #include<stdio.h>
// #include<stdio.h>
// int main()
// {
//     enum int v1,v2,v3,v4;
//     v1=value3;
//     v4=value4;
// }
// #include<stdio.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number :");
//     scanf("%d",&n);
    
//     for( i = 0; n>0; i++)
//     {
//         printf(" %d \n",n);
//         n=n/10;

//     }
    
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int u,a,t,d,k1,k2,k;
//     printf("Enter the acceleration (a) and initial velocity (u) value and time ");
//     scanf("%d %d %d",&a,&u,&t);
//     k1=a*a;
//     k2=t*t;
//     k=k1*k2;
//     d=(u*t)+(k)/2;
//     printf("The distance is %d",d);
// }
// problem
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float L,C,R,F;
//     printf("Enter value of L : ");
//     scanf("%f",&L);
//     printf("Enter value of R : ");
//     scanf("%f",&R);
//     printf("\n\nL = %f      R = %f\n\n",L,R);
//     printf("     Value of C     Frequency");
//     for(C=0.01;C<=0.1;C+=0.01)
//     {
//         double v;
//         v=1/(L*C)-(R*R)/(4*C*C);
//         F=sqrt(v);
//         printf("\n     %10.2f     %f",C,F);n
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char ans;
//     printf("\n\nDo you want to know my name \n\n\n?");
//     printf("\n\n\n\n\nType y for yes and n for no");
//     ans=getchar();
//     if(ans=='y'||ans=='Y')
//     {
//         printf("\nMy name is alex\n");
//     }
//     else if(ans=='n'||ans=='N')
//     {
//         printf("\nOK you are good for nothing\n");
//     }
// }
// #include<stdio.h>
// #include<ctype.h>
// #include<stdlib.h>
// #include <time.h> 
  
// void delay(int number_of_seconds) 
// { 
//     // Converting time into milli_seconds 
//     int milli_seconds = 1000 * number_of_seconds; 
  
//     // Storing start time 
//     clock_t start_time = clock(); 
  
//     // looping till required time is not achieved 
//     while (clock() < start_time + milli_seconds); 
// }
// int main()
// {
//     char character;
//     label:
    
//     printf("\npress any key \n");
//     character=getchar();
//     if(character=='.')
//       {  exit(0); 
//       }
//     else if(isalpha(character)>0)
//          {printf("\nThe character is a letter.\n");
//          }
//          if (islower(character)>0)
//              {printf("\nThe character is in lowercase.\n ");
//              putchar(toupper(character));
//              printf("%c",character);
//              }
//          else if (isupper(character)>0)
//              {printf("\nThe character is a uppercase.\n");
//              putchar(tolower(character));
//              printf("%c",character);
//              }
//     else
//     {
//          if(isdigit(character)>0)
//             {printf("\nThe character is a digit.\n");
//             }
//          else 
//             {printf("\nThe character is not alphnumeric.\n");
//             }
//     }
// delay(2000);
// system("clear"); w1
// delay(2000);
//     goto label;
    
// }
#include<stdio.h>
#include<ctype.h>
int main()
{
    int no;
    char name[15],name2[15],name3[15];
    printf("Enter serial number and name one \n");

    printf("Enter serial number and name one\n");

}

