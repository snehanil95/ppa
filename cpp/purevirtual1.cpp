#include <iostream>
using namespace std;
class circle
{
  public:
  	float PI;
  	float radius;
  	
  	circle()
  	{
  	PI=3.14;
  	radius=0.0;
  	}
  	
  	circle(float A,float B)
  	{
  	PI=A;
  	radius=B;
  	}
  	
  	void Display()
  	{
  	cout<<"value of Radius is:"<<radius<<"\n";
  	}
  	
  	virtual float area()=0;
  	virtual float circumference()=0;
};

 class marvinfo :public circle
 {
 
   public:
   marvinfo():circle()
   {
   }
   marvinfo(float x,float y):circle(x,y)
   {
   }
   	float area()
   	{
   	float ans=PI*radius*radius;
   	return ans;
   	}
   	
   	float circumference()
   	{
   	float ans=2*PI*radius;
   	return ans;
   	}
 };
int main()
{
float fret=0;
 marvinfo mobj1;
 marvinfo mobj2(3.14,10.89);
 fret=mobj2.area();
 cout<<"area="<<fret<<"\n";
 fret=mobj2.circumference();
 cout<<"area="<<fret<<"\n";
return 0;
}
