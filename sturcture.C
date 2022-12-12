#include<stdio.h>
struct demo
{
int i=0;
float f;
int j; 
double d;
};

int main()
{
struct demo o1;
struct demo o2;
struct demo o3;

//o1.i=10;
printf("size o1=%d",sizeof(o1));

return 0;
}
