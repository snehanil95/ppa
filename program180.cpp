#include<iostream>
using namespace std;
template <class T>
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
        
    }
    return max;
}
int main()
{
    

    float data1[]={10.3,20.2,30.5,40.3},fRet=0.0;
    

   
      float ret1= Maximum(data1,4);
    cout<<"Max:"<<ret1 <<"\n";
    
    return 0;
}