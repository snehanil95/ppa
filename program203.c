#include<stdio.h>
//input :4
//4+3+2+1=10

void FactorsI(int No)
{
int iCnt=1;
  while(iCnt <=No/2 )
  {
    if(No % iCnt == 0)
    {
        printf("%d\n",iCnt);
    }
    iCnt++;
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