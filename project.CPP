#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ROCK=1;
    int PAPER=2;
    int SCISSOR=3;
    int i,j;
    int Pscore =0;
    int Cscore =0;
    int ch;
    srand(time(NULL));
printf("\nYOU ARE PLAYING ROCK PAPER SCISSOR GAME");
printf("\n");
printf("\n----------------------------------------");
printf("\nROCK=1,\nPAPER=3\nSCISSOR=3");

for(i=0;i<=3;i++)
{
printf("\n\nPLAYERS TURN:");
scanf("%d",&ch);
int computer=rand()%3+1;
printf("\nCOMPUTER CHOICE:%d",computer);
if(ch==1)
{
if(computer==1)
{
printf("\nDRAW");
}
if(computer==2)
{
printf("\ncomputer wins");
Cscore=Cscore+1;
}
if(computer==3)
{
printf("\nplayer win\n");
Pscore=Pscore+1;
}
}
else if(ch==2)
{
if(computer==2)
{
printf("\nDRAW");
}
if(computer==1)
{
printf("\ncomputer wins");
Cscore=Cscore+1;
}
if(computer==3)
{
printf("\nplayer win");
Pscore=Pscore+1;
}
}


else if(ch==3)
{
if(computer==3)
{
printf("\nDRAW");
}
if(computer==2)
{
printf("\ncomputer wins");
Cscore=Cscore+1;
}
if(computer==1)
{
printf("\nplayer win\n");
Pscore=Pscore+1;
}
}
else
{
printf("\nWRONG OPTION");
}
printf("\n");
printf("\nROUND %d score",j++);
printf("\n******************");
printf("\n|computer score %d|",Cscore);
printf("\n|player score %d  |",Pscore);
printf("\n******************");
}
printf("\nFINAL SCORE");
printf("\n");
printf("\n******************");
printf("\n|computer score %d|",Cscore);
printf("\n|player score %d  |",Pscore);
printf("\n******************");
return 0;
}

