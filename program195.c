//take position from user off bit
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Pos)
{
    UINT iMask=0X00000001;

    iMask=iMask<<(Pos-1);
    iMask=~iMask;

    return(No & iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;
    UINT position=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    printf("Enter the  position:");
    scanf("%d",&position);

    iRet=OffBit(value,position);

    printf("Updated number is:%d",iRet);

    return 0;
}
/*

No= 1   0  1  0   1   1    1    0
pos=6

iMask=0 0   0   0   0   0   0   1

iMask=0010000  //after applying position

iMask=11011111 // ~iMask





*/