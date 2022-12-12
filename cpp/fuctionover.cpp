#include<iostream>
using namespace std;
void fun(int no) //call by value
{
cout<<"inside call by value:"<<no<<"\n";
no++;
}

void gun(int *p)   //call by address
{
cout<<"inside call by address:"<<*p<<"\n";
(*p)++;
}
void sun(int &ref)  //call by reference
{
cout<<"inside call by reference:"<<ref<<"\n";
ref++;
}
int main()
{
int i=10,j=10,k=10;
fun(i);
cout<<i<<"\n";
gun(&j);

cout<<j<<"\n";
sun(k);

cout<<k<<"\n";
return 0;
}
