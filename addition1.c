#include<stdio.h>
#include<stdlib.h>
int main()
{
int n=0;
int *Arr=NULL;
int sum=0;
printf("enter how many number you want to add?\n");
scanf("%d",&n);

Arr=(int *)malloc(n*sizeof(int));
//Arr=(int *)realloc(n,sizeof(int));
printf("enter the element=\n");
int i=0;
 for(i=0;i<n;i++)
 	{
	scanf("%d",&Arr[i]);
 	}
  for(i=0;i<n;i++)
 	{
       sum=sum+Arr[i];
 	}
 		
 		printf("\nAdditon is=%d",sum);	
 		free(Arr);
return 0;

}
