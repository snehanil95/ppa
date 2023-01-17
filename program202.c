#include<stdio.h>
//input :4
//4*3*2*1=10

int Factorial(int no)
{

     static int Fact=1;

    static int iCnt=1;

    if(iCnt <= no)
    {
        Fact=Fact*iCnt;
        iCnt++;
        Factorial(no);
    }
    return Fact;
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


iRet=Factorial(Value);

printf("Additon is :%d",iRet);

 
 return 0;
}