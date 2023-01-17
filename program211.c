#include<stdio.h>

int CapitalCount(char *str)
{
static int iCnt=0;

    if(*str !='\0')
    {
        if((str[iCnt]>='A')&&(str[iCnt]<='Z'))
        {
        iCnt++;
        }
        str++;
        CapitalCount(str);
        
    }


    return iCnt;
}
int main()
{
char Arr[20];
int iRet=0;
printf("Enter the string:");
scanf("%[^'\n']s",Arr);

iRet=CapitalCount(Arr);

printf("Number of capitals:%d",iRet);

    return 0;
}