#include<iostream>
using namespace std;
class demo
{
public:
     int i;
     int j;
     static int k;

 demo(int a,int b)
 {
  i=a;
  j=b;
 }
};
int demo::k=0;
int main()
{

 demo d(10,11);
 cout<<d.k<<"\n";
 //cout<<k<<"\n";
 cout<<sizeof(d)<<"\n";
cout<<demo::k<<"\n";
cout<<d.i<<"\n";
cout<<d.j;
return 0;
}
