#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int winnerfinder(long int arr[], int n)
{
    int i,j,pos_max=1,pos_min=1;
    
    // Initialize maximum element
    int max = arr[0];
    int min =arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max 
    for (i = 1; i < n; i++)
       { if (arr[i] > max)
           { 
             pos_max=i;
           }
       }     
     for (j = 1; j < n; j++)
        {if (arr[j] < min)
           { 
             pos_min=j;
           }
        }
    printf("The winner is player %d The loser is player %d",pos_max,pos_min);
}

int main(){

int n,number,nguess,guess,high,low;
long int score,scr[40];

printf("Enter the player number ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{   printf("Round for player %d\n",i+1);
    score=10000;//to reset the score 
    nguess=1;
    srand(time(0));
    number = rand()%100+1;//generates random number between 1-100
    // printf("ewqnosr%d45a5433f \n",number);
    do{
    printf("Guess the number between 1-100\n");
     scanf("%d",&guess);
     if(guess>number)
    {
        printf("lower number please!\n");
    }
     else if(guess<number)
    {
        printf("Higher number please!\n");
     }
    else{
        printf("You guessed it in %d attemps yout score is %ld\n",nguess,score);
     }
     nguess++;
    score=score-10;
    }while(guess!=number);
    scr[i]=score;
}
for(int i=0;i<n;i++)
{
    printf("score of player %d = %d\n",i+1,scr[i]);
}
 winnerfinder(scr,n);
getch();
return 0;
}
