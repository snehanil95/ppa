#include<stdio.h>

int strlenI(char *str)
{
int iCnt=0;
    while(*str !='\0')
    {
        iCnt++;
        str++;
    }

    return iCnt;
}
int main()
{
char Arr[20];
int iRet=0;
printf("Enter the string:");
scanf("%[^'\n']s",Arr);

iRet=strlenI(Arr);

printf("String length:%d",iRet);

    return 0;
}