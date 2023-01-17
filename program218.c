#include<stdio.h>
//reverse display
int Display(int Arr[],int iSize)
{
   static int iCnt=0;
   static int sum=0;
    if(iCnt<iSize)
    {
  printf("%d\n",Arr[iCnt]); 
  sum=sum+Arr[iCnt];
  iCnt++;
  Display(Arr,iSize);
    } 
    return sum;
}
int main()
{
int Brr[5]={10,20,30,40,50};

int iRet=0;

iRet=Display(Brr,5);

printf("Addition=%d",iRet);

    return 0;
}