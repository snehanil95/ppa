#include<stdio.h>
extern int i;
extern int j;
extern int arr[4];
 void gun();
int main()
{

printf("value of i=%d\n",i);
printf("value of j=%d\n",j);
j=51;

printf("value of j=%d\n",j);
printf("value of arr %d",arr[0]);

 fun();
gun();


return 0;
}
int i=21;

void gun()
{
printf("inside gun");
}
