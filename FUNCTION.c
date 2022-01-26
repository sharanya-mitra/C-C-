// #include<stdio.h>
// #include<conio.h>

// int leapyear(int n);
// int main()
// {
//     int n;
//     printf("Enter your year : ");
//     scanf("%d",&n);
//   leapyear(n);
// }

// //2000, 2004, 2008, 2012, 2016, 2020, 2024, 2028, 2032, 2036, 2040, 2044, and 2048
// int leapyear(int n)
// {
//   if(n%100==0 && n%400==0)
//     { printf("The year is a leapyear");
//       return 0;
//     }
//   else if(n%4==0)
//   {
//       printf("The year is a leapyear");
//   }
//   else
//   {
//      printf("The year is not a leapyear");
//   }
// }

// Program to print all prime factors
// #include<stdio.h>
// #include<conio.h>
// int main()
// {   int x;
//     printf("Enter the number :");
//     scanf("%d",&x);
//   for(int i=2;x>1;i++)
//    while(x%i==0)//It run untill the last factor
//    {
//      printf(" %d ",i);
//      x=x/i;   
//    }
// }