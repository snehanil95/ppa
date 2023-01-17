
#include<stdio.h>
typedef unsigned int UINT;
int BinaryDigitCnt(UINT No)
{
    int Digit=0;
    int iCnt=0;
    while(No !=0)
    {
        Digit=No%2;

        printf("%d",Digit);
        No=No/2;

        if(Digit==1)
        {
            iCnt++;
        }
    }
    printf("\n");
    return iCnt;
}
int main()
{

    UINT value=0;
    int iRet=0;
    printf("Enter value in Decimal format:");
    scanf("%d",&value);
   
    iRet=BinaryDigitCnt(value);

    printf("No. of on bits is %d",iRet);
    return 0;
}