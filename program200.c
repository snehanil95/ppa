#include<stdio.h>
//input :4
//4+3+2+1=10

int AdditionI(int no)
{

    int Sum=0;

    int iCnt=1;

    while(iCnt <= no)
    {
        Sum=Sum+iCnt;
        iCnt++;
    }
    return Sum;
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


iRet=AdditionI(Value);

printf("Additon is :%d",iRet);

 
 return 0;
}