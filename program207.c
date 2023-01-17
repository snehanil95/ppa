#include<stdio.h>
//input :4
//1+ 2=3 factor sumation

int DigitCount(int No)
{
int iDigit=0;

static int Count=0;
  
    if(No != 0)
    {
        iDigit=No%10;
        
         Count++;
        No=No/10;
         DigitCount(No);
    }
    
return Count;
}

int main()
{
  
    int Value=0;
    int iRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


iRet=DigitCount(Value);

printf("No.of digit=%d",iRet);
 return 0;

}