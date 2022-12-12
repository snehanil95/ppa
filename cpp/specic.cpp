#include<iostream>
using namespace std;
int Addi(int i,int j)
{
    int ans=0;
  ans=i+j;
  return ans;
}

float Addf(float i,float j)
{
    float ans=0;
  ans=i+j;
  return ans;
}
int main()
{
  int a=10,b=22,iRet=0;

  float x=90.0f,y=34.50f,fRet=0.00f;

  iRet=Addi(a,b);
  fRet=Addf(x,y);

  cout<<"Addition of int:"<<iRet<<"\n";
  cout<<"Addition of float:"<<fRet<<"\n";
  
  
    return 0;
}