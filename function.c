#include<stdio.h>
int add(int iValue1,int iValue2)
{
int Ioutput=0;

Ioutput=iValue1+iValue2;
return Ioutput;
}
int main()
{

int iNo1=10;
int iNo2=11;
int iAns=0;
iAns=add(iNo1,iNo2);
printf("addition=\n=%d",iAns);
}
