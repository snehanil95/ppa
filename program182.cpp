#include<iostream>
using namespace std;
template <class T>
class ArrayX
{
    public :
    T *Arr;
    int iSize;

   ArrayX(int i);
   void Accept();
   void Display();

};

template <class T>
 ArrayX <T>::ArrayX(int i)
    {
        iSize=i;
        Arr=new T[iSize];
    }

template <class T>
    void ArrayX <T> :: Accept()
    {
       int iCnt;
        cout<<"Enter the element of Array:";

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

template <class T>
    void ArrayX <T>:: Display()
    {
       int iCnt;
        cout<<" the element of Array:";

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
int main()
{
    ArrayX <int>obj(5);

    obj.Accept();
    obj.Display();

    ArrayX <double>obj1(5);

    obj1.Accept();
    obj1.Display();
    return 0;
}