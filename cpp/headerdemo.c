

#include "marvellous.h"



int main()
{
struct Demo obj;
float Radius=30.6f;
float Area=PI*Radius*Radius;
int no=10;
IPTR *ptr=&no;

printf("Area is=%f\n",Area);

printf("value of no is =%p\n",*ptr);
return 0;
}
