#include<stdio.h>
void demo(){

auto int a=10;
++a;
printf("value of a=%d\n",a);
}
void hello(){
static int b=10;
b++;
printf("value of b=%d\n",b);
}
int main(){
demo();
demo();
demo();
hello();
hello();
hello();
return 0;
}
