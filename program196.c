//accept number and range of positon and toggle the bit from thet range
#include<stdio.h>
typedef unsigned int UINT;
//0000  0000    0000    0000    0000    0000    0000    0000

// Accept number and range from user, and toggle the bits from that range

// Input    0010    1010    1010    1110    1101    1010    0110    1101    // Start = 7    End = 17

// Output   0010    1010    1010    1111    0010    0101    1010    1101

// Mask     0000    0000    0000    0001    1111    1111    1100    0000

// Mask1    1111    1111    1111    1111    1111    1111    1111    1111
// Mask2    1111    1111    1111    1111    1111    1111    1111    1111

// Mask1 = Mask1 << (Start - 1)
//          1111    1111    1111    1111    1111    1111    1100    0000

// Mask2 = Mask2 >> (32 - End)
// Mask2 = Mask2 >> 15
//          0000    0000    0000    0001    1111    1111    1111    1111

// Mask = Mask1 & Mask2
//          1111    1111    1111    1111    1111    1111    1100    0000
//          0000    0000    0000    0001    1111    1111    1111    1111    &
//  ------------------------------------------------------------------------------
//          0000    0000    0000    0001    1111    1111    1100    0000

// Result = No ^ Mask
//          0010    1010    1010    1110    1101    1010    0110    1101 
//          0000    0000    0000    0001    1111    1111    1100    0000    ^
//  ---------------------------------------------------------------------------
// 

UINT ToggleRange(UINT No,UINT Start,UINT end)
{
    UINT iMask1=0Xffffffff;
    UINT iMask2=0Xffffffff,iMask=0;
    UINT result=0;
    iMask1=iMask1 << (Start-1);
    iMask2=iMask2 >> (32-end);

    iMask=iMask1 & iMask2;
    
   return (No ^ iMask);
    

}
int main()
{
UINT value,i=0,j=0,Ret=0;

printf("Enter the va;lue:");
scanf("%d",&value);

printf("Enter the starting  range:");
scanf("%d",&i);

printf("Enter the ending range:");
scanf("%d",&j);

Ret=ToggleRange(value,i,j);
printf("Updated number is %d\n",Ret);




    return 0;
}