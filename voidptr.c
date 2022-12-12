#include<stdio.h>
int main()
{
char c='a';

int i=12;
float f=12.132;
double d=12.34523;

char *cp=&c;

int *ip=&i;
float *fp=&f;
double *dp=&d;
printf("value of ch=%c\n",c);
printf("address of ch=%p\n",&c);
printf("valude inside cp=%p\n",cp);
printf("data refer by cp=%c\n",*cp);
printf("%d\n",sizeof(c));
printf("%d\n",sizeof(cp));


void *vp=&c;
printf("data refer by vp=%c",*(char *)vp);
return 0;
}
