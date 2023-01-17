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
    int a=10.2,b=11.0,iRet=0.0;
    iRet=Addition(a,b);

    cout<<"Addition is:"<<iRet<<"\n";

return 0;
}