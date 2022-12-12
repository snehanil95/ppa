#include<iostream>
using namespace std;
class myclass
{
  public:
  	int i;
  	int j;
  	static int l;
  	static int k;
  myclass()
  {
  cout<<"\ninside default constructor\n";
   i=0;
   j=0;
  }
 
    myclass(int a,int b)
  {
  cout<<"inside parameterise constructor\n";
   i=a;
   j=b;
  }

  int multiplication() //static+non static
  {
   cout<<"inside intstance method";
   return i*j;
   cout<<k<<"\n";
  }
  
  static int divison() //static
  { 
   cout<<"\ninside static method";
   return k/l;
  }
  
  ~myclass()
  {
	cout<<"\ninside destructor";
   }
};
int myclass::l=2;
int myclass::k=4;
int main()
{
cout<<"inside main..";
myclass mobj;
myclass mobj1(11,12);
int ret=0;
ret=mobj1.multiplication();
cout<<"\nmultiplication is="<<ret;
ret=myclass::divison();
 cout<<"\ndivision is="<<ret;
 
return 0;
}
