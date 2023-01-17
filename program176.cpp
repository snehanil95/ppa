#include<iostream>
using namespace std;

void iswap(int &x,int &y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;


}

void dswap(double &x,double &y)
{
    double temp;

    temp=x;
    x=y;
    y=temp;


}
int main()
{

    int a=11,b=10;

    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    iswap(a,b);
    cout<<"After Swaping:"<<"\n";
    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    double x=11.09,y=10.2;
    cout<<"value of x:"<<x<<"\n";
    cout<<"value of y:"<<y<<"\n";

    dswap(x,y);
    cout<<"After Swaping:"<<"\n";
    cout<<"value of x:"<<x<<"\n";
    cout<<"value of y:"<<y<<"\n";

    return 0;
}