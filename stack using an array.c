#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX],top =-1,i;
void push(int x);
int pop();
void display();
void main()
{
 int val , prompt;
 do{
         printf("\n press \n<1> To PUSH data \n<2> To POP data \n<3>TO END>");
         scanf("%d",&prompt);
        switch (prompt)
        {
        case 1:printf("\n Enter value to push:");
               scanf("%d",&val);
               push(val);
             break;
        case 2:printf("\nPopped value = %d",pop());
             break;
       
        case 3:break; 
        default:
            printf("Invalid input !!!");
        }
    }while (prompt!=3);
}
void push(int x)
{
    if(top == MAX-1)
        printf("\n !!! Stack Overflow !!!");
    else
        stack[++top] = x;
}


int pop()
{
    if(top == -1)
    {
        printf("\n !!! Stack Underflow !!!");
        return 0;
    }
    else
        return stack[top--];
}
