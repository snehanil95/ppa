#include<stdio.h>
int main()
{
 int r1[]={12,21,23};
 int r2[]={12,34};
 int *jag[]={r1,r2};
 int S[]={3,2};
 int i=0,k=0,j;
 for(i=0;i<2;i++)
 {
    int *ptr=jag[i];
  for(j=0;j<S[k];j++)
  {

    printf("%d\t",*ptr);
  
  *ptr++;
 }
 printf("\n");
k++;
jag[i]++;
 }
    
    return 0;
}