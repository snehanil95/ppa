#include<iostream>
using namespace std;
class base
{
 	public:
 		int A,B;
 		
 		void fun()
 		{
 		cout<<"base fun\n";
 		}
    void gun(int i)
    {
    cout<<"base gun\n";
    }
    void gun(int i,int j)
    {
    cout<<"base 2nd gun\n";
    }
};
 
 
 class Derived:public base
 {
 public:
 	int x,y;
 	void sun()
 	{
 	cout<<"Derived sun\n";
 	} 
	void fun()
	{
	cout<<"Derived fun\n";
	}
 };
int main()
{
Derived dobj;
dobj.fun();
dobj.gun(11);
dobj.gun(11,21);
dobj.sun();
return 0;
}
