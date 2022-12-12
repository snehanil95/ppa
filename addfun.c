

#include<stdio.h>
int addf(int,int);
int res=22;
int main()
{
int no1=10;
int no2=11;
addf(10,11);
printf("addition is main %d",res);


return 1;

}

int addf(int val1,int val2)
{

int res=val1+val2;

printf("addition is %d \n",res);


}
