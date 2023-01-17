#include<stdio.h>
#include<stdbool.h>
//input :4
//1+ 2=3 factor sumation=same number (perfect num)

bool FactorsI(int No)
{
static int iCnt=1;
static int sum=0;
bool flag=false;

  if(iCnt <=No/2 )
  {
    if(No % iCnt == 0)
    {
        printf("%d\n",iCnt);
         sum=sum+iCnt;
    }
    iCnt++;
    
    FactorsI(No);
 if(sum==No)
 {
    flag=true;
 }
 return flag;

  }
return sum;
}

int main()
{
  
    int Value=0;
    bool  bRet=0;
printf("Enter the number:\n");
scanf("%d",&Value);


bRet=FactorsI(Value);
if(bRet==true)
{
    printf("True");
}
else
{
    printf("false");
}
 return 0;

}