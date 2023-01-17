#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[],int iSize)
{

    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}
int main()
{
    int data[]={10,20,30,40};
    Display(data,4);

    float data1[]={10.3,20.2,30.5,40.3};
    Display(data1,4);

    char data2[]={'a','c','v','t'};
    Display(data2,4);
    return 0;
}