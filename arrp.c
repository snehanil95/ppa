#include<stdio.h>

int addition(int arr[],int no)
{

	int res=0;
//	printf("no of element=%d\n",no);

	for(int i=0;i<no;i++)
	{


		res=res+arr[i];

	}

	return res;
}

int multi(int *ptr,int no)
{
	int res=1;

	int i=0;

	for(i=0;i<no;i++)
	{

	res=res*(*ptr);

//	printf("value at ptr=%d\n",*ptr);

	ptr++;

	}

//	printf("mul=%d%d\n",res,i);

	return res;
}

int main()
{

	int index=0;

	printf("how many elements");

	scanf("%d",&index);

	int arr[index];

//	int no=sizeof(arr)/sizeof(int);

	int lcnt=0;

	for(;lcnt<index;lcnt++)
	{
		printf("enter the number\n");

		scanf("%d",&arr[lcnt]);

//		printf("counter =%d\n",lcnt);
	}
	int no=lcnt;

	lcnt=addition(arr,lcnt);

	printf("addition is=%d\n",lcnt);

	lcnt=0;

	lcnt=multi(arr,no);

	printf("multification is=%d\n",lcnt);

	int *ptr=arr;

	int cnt=0;

	for(cnt=0;cnt<index;cnt++)
	{

		printf("array elements are=%d\n",*ptr++);

//		printf("array elements are=%d\n",arr[cnt]);


	}

	return 0;
}
