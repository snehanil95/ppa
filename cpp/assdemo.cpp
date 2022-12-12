using namespace std;
#include<iostream>
class demo

{

public:
	void fun(int i)
	{
	 cout<<"first";
	}


void fun(int i,int j)
        {
         cout<<"second";
        }
};
int main()
{
demo obj;
obj.fun(10);
obj.fun(10,20);
}
