#include<iostream>
using namespace std;
class mv
{
 public: void fun();
 void gun();
};

class demo
{
  public:
  	int i;
  	private:
  		int j;
  	protected:
  		int k ;
  		
  	demo()
  	{
  	 i=10;
  	 j=20;
  	 k=30;
  	}
  	friend void mv::fun();
  	  	friend void mv::gun();
};

void mv::fun()	//neked function
	{
	demo obj;
	cout<<"value of i:"<<obj.i<<"\n";

	cout<<"value of j:"<<obj.j<<"\n";
	cout<<"value of k:"<<obj.k<<"\n";
  	}
void mv::gun()	//neked function
	{
	demo obj;
	cout<<"value of i:"<<obj.i<<"\n";

	cout<<"value of j:"<<obj.j<<"\n";
	cout<<"value of k:"<<obj.k<<"\n";
  	}  	
	
int main()
{
mv mobj;
mobj.fun();
mobj.gun();
return 0;
}
