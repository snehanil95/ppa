#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;

    temp=*x;
    *x=*y;
    *y=temp;


}
int main()
{

    int a=11,b=10;

    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    swap(&a,&b);
    cout<<"After Swaping:"<<"\n";
    cout<<"value of a:"<<a<<"\n";
    cout<<"value of b:"<<b<<"\n";

    return 0;
}