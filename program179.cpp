#include<iostream>
using namespace std;

template <class T>
T Display(T Arr[],int iSize)
{

    int iCnt=0;
    T sum;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        sum=sum+Arr[iCnt];
    }
    return sum;
}

T Maximum(T Arr[],int iSize)
{

    int iCnt=0;
    T max=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>max)
        {
            max=Arr[iCnt];
        }
        return max;
    }
    return sum;
}
int main()
{
    int data[]={10,20,30,40},iRet=0;
    iRet=Display(data,4);

    cout<<"Addition of integer is:"<<iRet<<"\n";

    float data1[]={10.3,20.2,30.5,40.3},fRet=0.0;
    fRet=Display(data1,4);

    cout<<"Addition of float is:"<<fRet<<"\n";
      float ret1= Maximum(data1,4)
    cout<<"Max:"<<ret1 <<"\n";
    
    return 0;
}