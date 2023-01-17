#include<stdio.h>

void DisplayR(int No)
{
     static int iCnt=0;
    
    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);
    }
}

int main()
{
  
    int Value=0;
printf("Enter the number:\n");
scanf("%d",&Value);
printf("Inside main\n");

DisplayR(Value);

 printf("\nEnd of main\n");
 
 return 0;
}