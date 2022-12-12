#include<stdio.h>
int main()
{
int arr[4]={10,12,11,13};
int *p=&(arr[0]);
int *q=&(arr[3]);
printf("%d\n",arr[0]);
printf("%d\n",*p);
printf("%d\n",arr[3]);
printf("%d\n",*q);

return 0;
}
