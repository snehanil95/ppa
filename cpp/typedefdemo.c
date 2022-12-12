#include<stdio.h>
//typedef old_name new_name

typedef int INTEGER; 

 typedef unsigned long int ULONG;
 
 struct Demo
 {
  int a;
  int b;
 };
 typedef struct Demo DEMO;
 typedef struct DEMO * PDEMO;
int main()
{

INTEGER i=10;
ULONG j=21;
DEMO obj;
PDEMO ptr =&obj;
return 0;
}
