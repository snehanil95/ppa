#include<stdio.h>
extern int a;
extern int b;
extern void demo();
int main(){
demo();
printf("a=%d\n",a);
printf("b=%d",b);
return 0;
}
