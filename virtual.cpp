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
   virtual void gun()
    {
    cout<<"base gun\n";
    }
    virtual void sun()
    {
    cout<<"base sun\n";
    }
};
 
 
 class Derived:public base
 {
 public:
 	int x,y;
 	void gun()
 	{
 	cout<<"Derived gun\n";
 	} 
	void run()
	{
	cout<<"Derived run\n";
	}
	virtual void mun()
	{
	cout<<"Derived mun\n";
	}
 };
 
int main()
{
base *bp=NULL;
Derived dobj;
bp=&dobj;
bp->fun();
bp->gun();
bp->sun();
//cout<<"size of base class:"<<sizeof(base)<<"\n";
//ut<<"size of base class:"<<sizeof(Derived)<<"\n";
//Derived dobj;
//dobj.fun();
//dobj.gun(11);
//dobj.gun(11,21);
//dobj.sun();
return 0;
}
