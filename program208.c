#include<stdio.h>
//input :4
//1+ 2=3 factor sumation

int DigitSum(int No)
{
int iDigit=0;
int static sum=0;
static int Count=0;
  
    if(No != 0)
    {
        iDigit=No%10;
        sum=sum+iDigit;
         //Count++;
        No=No/10;
         DigitSum(No);
    }
    
return sum;
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


iRet=DigitSum(Value);

printf("No.of digit=%d",iRet);
 return 0;

}