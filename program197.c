
//print * * * * on screen
#include<stdio.h>

void DisplayI()
{

    int iCnt=0;
    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{

   static int iCnt=0;
    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}
int main()
{

DisplayI();
printf("\n");
DisplayR();

    return 0;
}