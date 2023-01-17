#include<stdio.h>
//input :4
//1+ 2=3 factor sumation

int FactorsI(int No)
{
static int iCnt=1;
static int sum=0;
  if(iCnt <=No/2 )
  {
    if(No % iCnt == 0)
    {
        printf("%d\n",iCnt);
         sum=sum+iCnt;
    }
    iCnt++;
    
    FactorsI(No);
  }
return sum;
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


iRet=FactorsI(Value);

printf("Sum=%d",iRet);
 return 0;

}