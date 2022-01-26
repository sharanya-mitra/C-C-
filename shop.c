
#include<stdio.h>
#include<conio.h>

int main()
 {
    int opt,qant,amount1,amount2,bill;
  
 printf("                       WELCOME EVERYONE\n");
 printf("                         ###########  \n ");
 printf("                          ########    \n ");
 printf("                           ######     \n ");
 printf("                            ####      \n ");
 printf("                             ##       \n ");
 printf("                      The great Mitra\n  ");
 printf("                            Shop      \n ");


 printf("      \n             press enter to start this protocol \n");
 getch();
 
 
 printf("\n          $$ BREAK FAST $$         \n");
 printf("  Item.no       ITEM        discount \n");
 printf("    1          KHADIMS        5%     \n");
 printf("    2          PARAG0N        10%    \n");
 printf("    3          TITAS          2%     \n");
 printf("    4          AJANTA         15%    \n");
 
 printf("Enter the brand := ");
 scanf("%d",&opt);
 printf("Enter the cost :");
 scanf("%d",&qant);
 if(opt==1)
 {printf("you chose Khadims and get 5% off \n ");
 amount1=0.05*qant;
 }
 else if(opt==2)
 {printf("you chose paragon and get 10% off   \n");
 amount1=0.1*qant;
 }
 else if(opt==3)
 {printf("you chose Titas and get 2% off \n");
 amount1=0.02*qant;
 }
 else if(opt==4)
 {printf("you chose Ajanta and get 15% off    \n");
 amount1=0.15*qant;
 }
 else
 {printf("option not valid today find it the next day   \n "); }

 
 printf("your  total amount is: %d  \n ",amount1);
  printf("\n\n   THANK YOU SIR HANVE A NICE DAY  \n \n");

 getch();

return(0);

}


