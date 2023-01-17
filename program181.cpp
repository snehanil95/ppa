#include<iostream>
using namespace std;

class ArrayX
{
    public :
    int *Arr;
    int iSize;

   ArrayX(int i);
   void Accept();
   void Display();

};

 ArrayX ::ArrayX(int i)
    {
        iSize=i;
        Arr=new int[iSize];
    }

    void ArrayX :: Accept()
    {
       int iCnt;
        cout<<"Enter the element of Array:";

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void ArrayX :: Display()
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
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    return 0;
}