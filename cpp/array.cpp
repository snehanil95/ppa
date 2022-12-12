#include<iostream>
using namespace std;
class Array
{
  public:
      int iSize;
      int *Arr;
      
      Array(int iLenght=10)
       {
        iSize=iLenght;
        Arr=new int[iSize];
       }
       
       ~Array()
       {
        delete []Arr;
       }
       
       void Accepts()
       {
        cout<<"entr the value=";
        int i=0;
        for(i=0;i<iSize;i++)
        {
        cin>>Arr[i];
        }
       }
       
       void Display()
       { 
       int i;
       cout<<"Element of array\n";
       for(i=0;i<iSize;i++)
        {
        cout<<Arr[i]<<"\t";
       }
       }
       
       int sum()
       {
       int sum=0,i=0;
       for(i=0;i<iSize;i++)
       {
        sum=sum+Arr[i];
        
       }
       return sum;
       }
       
  
};

int main()
{
Array obj1(4);
Array obj2(6);
obj1.Accepts();
obj1.Display();
int iRet=0;
iRet=obj1.sum();
cout<<"\naddition of array="<<iRet<<"\n";
return 0;
}
