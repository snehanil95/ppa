#include<stdio.h>
int main()
{
char ch='A';
int i=11;
float f=3.14;
double d=9.43;
printf("%d\n",i);
printf("%c\n",ch);
printf("%f\n",f);
printf("%lf\n",d);

printf("size of char %d\n",sizeof(ch));
printf("size of int %d\n",sizeof(i));
printf("size of float %d\n",sizeof(f));
printf("size of double %d\n",sizeof(d));

printf("addrss of ch %p\n",&ch);
printf("addrss of int  %p\n",&i);
printf("addrss of float %p\n",&f);
printf("addrss of double %p\n",&d);
printf("addrss of ch %p\n",&ch);

return 0;
}
