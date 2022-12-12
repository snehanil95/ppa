#include<iostream>
using namespace std;
class demo
{
   public:
   	int i;
   	 int j;
   	//const int k;
   	
   	demo() 
   	{
   	i=90;
   	j=60;
   	cout<<i<<j;
   	}
    void fun() const
   	{
   	int a=10;
   	int b=12;
   	a++;
   	b++;
   	}
   	void gun() const
   	{
   	 
   	}
};

int main()
{

const demo obj;
//obj.i=10;
obj.fun();
 //obj.gun();
return 0;
}
