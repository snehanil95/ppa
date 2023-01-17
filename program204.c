#include<stdio.h>
//input :4
//1 2

void FactorsI(int No)
{
static int iCnt=1;
  if(iCnt <=No/2 )
  {
    if(No % iCnt == 0)
    {
        printf("%d\n",iCnt);
    }
    iCnt++;
    FactorsI(No);
  }
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


FactorsI(Value);
 return 0;
}