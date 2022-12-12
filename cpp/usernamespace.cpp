#include<iostream>
using namespace std;

namespace Marvellous
{
     class Demo
     {
     
     public :
     	int i,j;
     	void fun()
     	{
     	cout<<"Inside fun of demo from marvellous\n";
     	}
     };
    
    class Hello
    {
     public:
     	int x,y;
    };


}

namespace infosystem
{
 class Demo
 {
  public:
  	int a,b;
  	void fun()
  	{
  	     	cout<<"Inside fun of demo from infosystem\n";
  	}
  	
 };

}
int main()
{
 Marvellous::Demo obj1;
 obj1.fun();
 infosystem::Demo obj2;
 obj2.fun();
 
 using namespace Marvellous;
 
 Hello hobj;
 Demo obj3;
return 0;
}
