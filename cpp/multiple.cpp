#include<iostream>
using namespace std;
class base1
{

	public:int a;
	
	base1()
	{
	cout<<"inside base1 constructor\n";
	}
	
		~base1()
	{
	cout<<"inside base1 destructor\n";
	}

	void fun()
	{
	
	 cout<<"inside fun\n";
	}
};

class base2
{
public : int i,j,k;
	base2()
	{
	cout<<"inside base2 constructor\n";
	}	~base2()
	{
	cout<<"inside base2 destructor\n";
	}

void gun()
	{
	
	 cout<<"inside gun\n";
	}

};
class Derived:public base2,public base1
{

 public:
 	int x,y;

	Derived()
	{
	cout<<"inside derived constructor\n";
	}
		~Derived()
	{
	cout<<"inside derived destructor\n";
	}
	
	void run()
	{
	
	 cout<<"inside run\n";
	}
};

int main()
{

Derived dobj;
 dobj.fun();
 dobj.gun();
 dobj.run();

return 0;
}
