#include<iostream>
using namespace std;

class overloading
{

 public:
   int add(int A,int B)
   {
   cout<<"\nAddition of integer=\n";
   return A+B;
   }
 float add(float A,float B)
   {
   cout<<"\nAddition of float=\n";
   return A+B;
   }
 double add(double A,double B)
   {
   cout<<"\nAddition of double=\n";
   return A+B;
   }
   
   int add1(int A,int B,int C)
   {
   int ans=0;
   ans=A+B;
   cout<<"\naddition of 3 numbers\n";
   return ans+C;
   }
};
int main()
{
 int reti=0,reti1=0;
 float retf=0;
 double retd=0;
 overloading obj;
 overloading obj1;
  reti=obj.add(11,21);
  cout<<reti;
  
  reti1=obj1.add1(112,12,32);
  cout<<reti1;
  
 retf= obj.add(2.3f,3.2f);
  cout<<retf;
  
  retd=obj.add(21.3,34.3);
  cout<<retd<<"\n";
return 0;
}
