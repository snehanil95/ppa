#include<stdio.h>

void DisplayBinary(unsigned int No)
{
    int Digit=0;

    while(No !=0)
    {
        Digit=No%2;

        printf("%d",Digit);
        No=No/2;
    }
    printf("\n");
}
int main()
{

    unsigned int value=11;

    printf("value in Decimal formate:%d\n",value);

    printf("value in octal formate:%o\n",value);
    printf("value in hexadecimal formate:%x\n",value);
    DisplayBinary(value);
    return 0;
}