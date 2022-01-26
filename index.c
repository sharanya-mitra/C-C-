//loop 
  //print ascii value of 0 to 255
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//      int a;
//      a = 0;
//     while (a <= 255)
//     {
//         printf(" %d = %c ",a,a);
//         a++;
//         if(++a%16==0)
//         {
//             printf("\n");
//         }
//     }
//     return 0;
//}
//  #include<stdio.h>
// #include<conio.h>
//  int main()
//  { 
//      int num,count = 1,rem, sum;
//     while(count<=999)
//          {
//              num = count;
//              sum=0;
//             while(num)
//             {
//                 rem=num%10;
//                 sum=sum+(rem*rem*rem);
//                 num=num/10;
//             }
//             if(count==sum)
//             {
//                 printf("%d is an Armstrong number\n",count);
//             }
//             count++;
//          }
// }
// #include<stdio.h>  
  
// int main()  
// {  
//     int m = 21, p, c;  
  
//     while(1)  
//     {  
//         printf("\nNumber of Match sticks left = %d\n", m);  
//         printf("Pick 1 or 2 or 3 or 4 matches\n");  
//         scanf("%d", &p);  
  
//         if(p > 4 || p < 1)  
//             continue;  
  
//         m = m - p;  
  
//         printf("Number of matches left = %d\n", m);  
  
//         c = 5 - p;  
  
//         printf("out of which computer picked up %d\n", c);  
  
//         m = m - c;  
  
//         if(m == 1)  
//         {  
//             printf("\nNumber of matches left = %d\n", m);  
//             printf("You lost the Game\n");  
//             break;  
//         }  
//     }  
  
//     return 0;  
// } 
































