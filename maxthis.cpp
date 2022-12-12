#include<iostream>
using namespace std;
class maxthis
{
  public:
       // int a,b;
        int x,y;
     maxthis()
     {
     
     //x=this->a;
     //y=this->b;
     
      
     }
     int maxthisnum()
     {
     int m=0;
     if(x>y)
       m=x;
       else
        m=y;
      return m;
     }
};

int main()
{
int ret;
 maxthis mobj;
printf("enter the numbers=\n");
scanf("%d",&mobj.x);
scanf("%d",&mobj.y);
ret=mobj.maxthisnum();
        printf("maximun number is=%d",ret);
return 0;
}
