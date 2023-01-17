#include<stdio.h>

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
printf("Inside main\n");

DisplayR();

 printf("End of main\n");
 
 return 0;
}