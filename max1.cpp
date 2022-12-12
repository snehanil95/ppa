#include<iostream>
using namespace std;

class maxNo
{
	public: 
     	 int a,b;

   	 maxNo()
  	 {
	    a=0;
	    b=0;
	 }

	  int maxnum()
	 {
	   int max1=0;
	     if(a<b)
	      max1=b;
	     else
	       max1=a;
	    return max1;
  	 }
};
 
int main()
{
	int ret=0;
		maxNo obj;
	cout<<"enter the first number=";
	scanf("%d",&obj.a);

	cout<<"enter the second number=";
	scanf("%d",&obj.b);

	ret=obj.maxnum();
	cout<<"maximum number="<<ret;
	return 0;
}
