//chk 10th bit on or not
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
//512  decimal
//  0000    0000    0000    0000    0000    0010    0000    0000  binary
//  0       0       0       0       0         2       0          0   hex
//00000200  HEXA
//0x00000200   HEXA
bool CheckBit(UINT No)
{
    
    UINT iMask=0X00000200;
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
        printf("10th bit is on");
    }
    else
    {
        printf("10th bit is off");
    }

    return 0;
}
