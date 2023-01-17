//toggle bit chalu asel tr band band asel tr chalu
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

//0000  0000    0000    0000    0000  0000    0000    0000
//1111  1111    1111    1111    1111  1111    1111    0111
//0Xfffffff7



UINT ToggleBit(UINT No)
{
    UINT iMask=0X000000070; // number which has 5 ,6,7th bit on

    return(No ^ iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=ToggleBit(value);

    printf("Updated number is:%d",iRet);

    return 0;
}