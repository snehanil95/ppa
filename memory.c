#include<stdio.h>
#include<stdlib.h>
int main()
{
 int arr[5];     //static memory allocationint 
 
int *p=NULL;
p=(int *)malloc(sizeof(int)*5);
free(p);
return 0;

}
