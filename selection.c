#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo%2)==0)
  {
   return true;
  }
  else {
  return false;
  }

}
int main()
{
  int iValue=0;
  bool bRet;
  printf("enter the number");
  scanf("%d",&iValue);
  
  bRet=CheckEven(iValue);
  if(bRet==true)
   {
    printf("even");
    }
    else{printf("odd");}

return 0;

}
