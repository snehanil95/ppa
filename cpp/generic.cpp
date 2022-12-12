#include<iostream>
using namespace std;

template <class T>
T Addi(T i,T j)
{
    T ans;
  ans=i+j;
  return ans;
}


int main()
{
  int a=100,b=22,iRet=0;

  float x=90.0f,y=34.50f,fRet=0.00f;

  double x1=90.0,y1=34.50,dRet=0.00;


  iRet=Addi(a,b);
  fRet=Addi(x,y);
  dRet=Addi(x1,y1);
  cout<<"Addition of int:"<<iRet<<"\n";
  cout<<"Addition of float:"<<fRet<<"\n";
  cout<<"Addition of double:"<<dRet<<"\n";
  
  
    return 0;
}