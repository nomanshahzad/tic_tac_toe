#include <stdio.h>

int check(int game[3][3],int a,int b)
{
  if(game[a][b]==0)
     return 1;
     return 0;
}



void display(int game[3][3]){
  for(int c=0;c<3;c++){
    for(int d=0;d<3;d++){
      printf("_%d_|",game[c][d]);
    }
    printf("\n");
  }
}




int wincondition(int game[3][3]){
  int count;

  if(game[0][0]==1&&game[0][1]==1&&game[0][2]==1)
       {
         count=1;
       }
       else if(game[0][0]==2&&game[0][1]==2&&game[0][2]==2)
       {
         count=2;
       }



       if(game[1][0]==1&&game[1][1]==1&&game[1][2]==1)
            {
              count=1;
            }
            else if(game[1][0]==2&&game[1][1]==2&&game[1][2]==2)
            {
              count=2;
            }




      if(game[2][0]==1&&game[2][1]==1&&game[2][2]==1)
                 {
                   count=1;
                 }
                 else if(game[2][0]==2&&game[2][1]==2&&game[2][2]==2)
                 {
                   count=2;
                 }




       if(game[0][0]==1&&game[1][0]==1&&game[2][0]==1)
                {
                  count=1;
                }
                else if(game[0][0]==2&&game[1][0]==2&&game[2][0]==2)
                {
                count=2;
                }



        if(game[0][1]==1&&game[1][1]==1&&game[2][1]==1)
              {
                count=1;
              }
              else if(game[0][1]==2&&game[1][1]==2&&game[2][1]==2)
              {
                count=2;
              }



        if(game[0][2]==1&&game[1][2]==1&&game[2][2]==1)
            {
              count=1;
            }
            else if(game[0][2]==2&&game[1][2]==2&&game[2][2]==2)
            {
              count=2;
            }




        if(game[0][0]==1&&game[1][1]==1&&game[2][2]==1)
            {
              count=1;
            }
            else if(game[0][0]==2&&game[1][1]==2&&game[2][2]==2)
            {
              count=2;
            }





           if(game[0][2]==1&&game[1][1]==1&&game[2][0]==1)
            {
              count=1;
            }
           else if(game[0][2]==2&&game[1][1]==2&&game[2][0]==2)
            {
              count=2;
            }

return count;
}







int main()
{
  int a,b;
int game[3][3]={0};
printf("1 is for player one\n");
printf("2 is for player two\n");

int turn=1;
int draw=0;
int count=0;
while(count!=1 && count!=2 && draw<10)
  {

    if(turn==1)
    {
        printf("player 1 turn\n");
        printf("enter the adress where you want to mark\n");
        scanf("%d %d",&a,&b);
        if(check(game,a,b)==1){
        game[a][b]=1;
        turn=2;
      }
        else
        printf("place is not empty.enter adress again\n");
      }
      else if(turn==2)
      {
        printf("player 2 turn\n");
        printf("enter the adress where you want to mark\n");
        scanf("%d %d",&a,&b);
        if(check(game,a,b)==1){
        game[a][b]=2;
        turn=1;}
        else
        printf("place is not empty.enter adress again\n");
      }


      display(game);
      count=wincondition(game);
    if(count==1){
      printf("player 1 won\n");
    }
    else if(count==2){
      printf("player 2 won\n");
    }
      draw++;


  }

return 0;
}
