#include<stdio.h>

struct demo
{

	int ino;
	struct demo *next;



};









int main()
{


	printf("size of struct=%ld\n",sizeof(struct demo));

	struct demo dobj1,dobj2,dobj3;

	printf("enter integer");

	scanf("%d%d",&dobj1.ino,&dobj2.ino);

	printf("enter ");

	scanf("%d",&dobj3.ino);




	struct demo *ptr=&dobj1;

	dobj1.next=&dobj2;

	dobj2.next=&dobj3;

	dobj3.next=NULL;


	while(ptr->next!=NULL)
	{
		printf("values are=%d\n",ptr->ino);

		ptr++;
	}



//	printf("size of struct=%d\n",sizeof(dobj));

//	printf("no are =%d\n%f\n ",ptr->ino,dobj.fno);

	return 0;
}
