#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main(){

char world[24][40];
char player=A;
int p=0;
int coord[]={77,111,114,101,32,71,97,109,101,115,32,111,110,32,67,32,80,114,111,103,114,97,109,109,105,110,103,32,90,111,110,101,32,97,112,112,};

 int sizey=24;
  int sizex=40;
  int x,y,yi;
  
  
  char playerLaser ='^';
  char enemy ='M';
  char enemyShielded ='O';
  char explosion ='X';
  int score = 0;
  int victory = 1;
  int laserReady = 1;
  int enemyReady = 0;
  srand(time(NULL));
  printf("\n\n Welcome to Mitra Space fighter \n\n\n\n ");
  printf("\nEnter a and b to move left and right respectively");
  printf("Enter m to fire laser beam");
  printf("\n\n\n Enter any key to start");
  getch();
  
   system("cls");
 
  int totalEnemies=0;
   
   for(x=0;x<sizex;x++){
   for(y=0;y<sizey;y++){
    if((y+1)%2==0 && y<7 && x>4 && x<sizerx-5 && x%2==0)
	{world[y][x]=enemy;
	totalEnemies++;
    }
    else
          if((y+1)%==0&&y>=7&&y<9&&x>4&&x<)
   
    
}
