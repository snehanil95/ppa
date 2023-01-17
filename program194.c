//toggle nibble(4bits) chalu asel tr band band asel tr chalu
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;


//0000  1111    0000   1111   0000  1111   0000    1111
//0X0f0f0f0f



UINT ToggleNibble(UINT No)
{
    UINT iMask=0X0f0f0f0f; // number which has 5 ,6,7th bit on

    return(No ^ iMask);
    
}


int main()
{
    UINT value=0;
    UINT iRet=0;

    printf("Enter value in Decimal format:");
    scanf("%d",&value);

    iRet=ToggleNibble(value);

    printf("Updated number is:%d",iRet);

    return 0;
}


