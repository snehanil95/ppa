#include<iostream>
using namespace std;
class Demo
{
   
   	int A,B;
   	public:
   	Demo(int i=10,int j=20)
	{
	A=i;
	B=j;
	}
	void Display()
	{
	cout<<A<<"\n"<<B;
	}
	friend Demo operator +(Demo,Demo);
	
	friend Demo operator -(Demo,Demo);
	
	friend Demo operator *(Demo,Demo);
};
Demo operator +(Demo obj1,Demo obj2)
{
 cout<<"inside + Operator function\n";
 return Demo(obj1.A+obj2.A,obj1.B+obj2.B);
}
Demo operator -(Demo obj1,Demo obj2)
{
 cout<<"\ninside - Operator function\n";
 return Demo(obj1.A-obj2.A,obj1.B-obj2.B);
}
Demo operator *(Demo obj1,Demo obj2)
{
 cout<<"\ninside * Operator function\n";
 return Demo(obj1.A*obj2.A,obj1.B*obj2.B);
}
int main()
{
Demo X(10,20);
Demo Y(10,20);
Demo Ans(10,20);

Ans=X+Y;
Ans.Display();

Ans=X-Y;
Ans.Display();

Ans=X*Y;
Ans.Display();
return 0;
}
