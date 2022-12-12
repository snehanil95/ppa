#include<iostream>
using namespace std;
class base
{
public:int i;
	private: int j;
	protected: int k;
	public:base()
	{
	i=10;
	j=23;
	k=43;
	
	}   
	
	void fun()
	{
	cout<<"value of public i:"<<i<<"\n";
		cout<<"value of protected j:"<<j<<"\n";
	
		cout<<"value of private k:"<<k<<"\n";
	}
};

/*class Derived
{

};*/
int main()
{
base bobj;
	cout<<"value of public i:"<<bobj.i<<"\n";
		//cout<<"value of protected j:"<<bobj.j<<"\n";
	
		//cout<<"value of private k:"<<bobj.k<<"\n";
bobj.fun();
return 0;
}
