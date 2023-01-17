#include<iostream>
using namespace std;
template <class T>
void swapX(T &x,T &y)
{
    T temp;

    temp=x;
    x=y;
    y=temp;


}
int main()
{

    int a=11,b=10;

    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    swapX(a,b);
    cout<<"After Swaping:"<<"\n";
    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    double x=11.9,y=10.2;

    cout<<"value of x:"<<x<<"\n";
    cout<<"value of y:"<<y<<"\n";

    swapX(x,y);
    cout<<"After Swaping:"<<"\n";
    cout<<"value of x:"<<x<<"\n";
    cout<<"value of y:"<<y<<"\n";

    return 0;
}