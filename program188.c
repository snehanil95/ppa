//4th bit
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT No)
{
    int Digit=0;
    UINT iMask=8;
    UINT Result=0;


   Result=No & iMask;

    if(Result==iMask)
    {
        return true;
    }

    else
    {
        return false;
    }
}


int main()
{
    UINT value=0;
    bool bRet=false;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    bRet=CheckBit(value);

    if(bRet==true)
    {
        printf("4th bit is on");
    }
    else
    {
        printf("4th bit is off");
    }

    return 0;
}