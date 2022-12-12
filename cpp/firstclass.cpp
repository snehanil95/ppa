#include<iostream>
using namespace std;

class Maths
{
  public:
  	int iNo1;
  	int iNo2;
	Maths()
	{
	 iNo1=0;
	 iNo2=0;
	}
	
	Maths(int A,int B)
	{
	iNo1=A;
	iNo2=B;
	}

    int Addition()
      {
      return iNo1+iNo2;
      }
      
      int substraction()
      {
      return iNo1-iNo2;
      }
};


int main()
{
Maths obj1;
Maths mobj2(11,22);
	int ret=0;
	ret=mobj2.Addition();
	cout<<"addition is="<<ret<<"\n";

	ret=obj1.Addition();
	cout<<"addition is="<<ret<<"\n";



return 0;

}
