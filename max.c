#include<stdio.h>
int maxnum(int no1,int no2)
{
int max=0;
 if(no1<no2)
{ 
 max=no2;
}
else 
    max=no1;
}
int main()
{
int n1,n2;
int ret=0;
printf("enter first number=\n");
scanf("%d",&n1);
printf("enter second number=\n");
scanf("%d",&n2);
ret=maxnum(n1,n2);
printf("max number is=%d",ret);
return 0;
}
