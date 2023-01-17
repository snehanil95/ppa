#include<iostream>
using namespace std;

template<class T>

T Addition(T i,T j)
{

    T ans;
    ans=i+j;

    return ans;
}
int main()
{
    int a=10,b=11,iRet=0;
    iRet=Addition(a,b);

    cout<<"Addition is:"<<iRet<<"\n";

    double x=10.3,y=11.1,dRet=0.0;
    dRet=Addition(x,y);

    cout<<"Addition of double is:"<<dRet<<"\n";


return 0;
}