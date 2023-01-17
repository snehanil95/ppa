#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos,UINT Pos1)
{
    UINT iMask = 0X00000001; 
    UINT iMask1 = 0X00000001; 
    UINT iMask2 = 0X00000001; 

       // UINT iMask = 1;
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32) || (Pos1 < 1) || (Pos1 > 32))
    {
        printf("Invalid position, it should between 1 to 32\n");
        return false;
    }

    iMask2 = iMask2 << (Pos -1);  // Dynamic Mask Formation
    iMask1 = iMask1 << (Pos1 -1); 

    iMask=iMask1 | iMask2;  //combin two mask

    Result = No & iMask;

    if(Result == iMask)
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
    UINT Value = 0;
    UINT Position = 0,Position1;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the position of bit\n");
    scanf("%d",&Position);

    printf("Enter the position of bit\n");
    scanf("%d",&Position1);

    bRet = CheckBit(Value,Position,Position1);

    if(bRet == true)
    {
        printf("Bit at the position %d is ON\n",Position);
    }
    else
    {
        printf("Bit at the position %d is OFF\n",Position);
    }
    return 0;
}