//4th bit off
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0000    0000
//1111  1111    1111    1111    1111  1111    1111    0111
//0Xfffffff7



UINT OffBit(UINT No)
{
    UINT iMask=0Xfffffff7;

    return(No & iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=OffBit(value);

    printf("Updated number is:%d",iRet);

    return 0;
}
