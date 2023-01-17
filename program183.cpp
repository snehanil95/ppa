#include<iostream>
using namespace std;
template <class T>
struct node
{
    T data;
    struct node *next;
};



template <class T>

class SinglyLL
{
    public :
    struct node<T> * first;
    SinglyLL();
    void InsertFirst(T no);
    void Display();
    int Count();

};
template <class T>
SinglyLL <T>:: SinglyLL()
{
    first=NULL;
}

template <class T>
void SinglyLL <T>::InsertFirst(T no)
{
   struct node <T> * newn=new node<T>;

     newn->data=no;
   newn->next=NULL;
    if(first==NULL)
    {
       first=newn;
       
    }
    else
    {
        
        newn->next=first;
        first=newn;
    }

}
template <class T>
void SinglyLL <T>::Display()
{
    struct node<T> * temp=first;
   while(temp !=NULL)
   {
    cout<<temp->data<<"\t";
    temp=temp->next;
   }
}
template <class T>
int SinglyLL <T>:: Count()
{
    int iCnt=0;
 struct node<T> * temp=first;
   while(temp !=NULL)
   {
    iCnt++;
    temp=temp->next;
   }
 return iCnt;
}

int main()
{
 SinglyLL <int>obj;

 obj.InsertFirst(101);
 obj.InsertFirst(100);
 obj.InsertFirst(102);

 obj.Display();

 int iRet=obj.Count();
 cout<<"Number of nodes:"<<iRet<<"\n";

SinglyLL <double>obj1;

 obj1.InsertFirst(101.1);
 obj1.InsertFirst(100.2);
 obj1.InsertFirst(102.3);

 obj1.Display();

 int dRet=obj1.Count();
 cout<<"Number of nodes:"<<dRet<<"\n";

SinglyLL <char>obj2;

 obj2.InsertFirst('a');
 obj2.InsertFirst('b');
 obj2.InsertFirst('c');
 obj2.InsertFirst('r');
 obj2.InsertFirst('t');
 obj2.InsertFirst('s');

 obj2.Display();

 int CRet=obj2.Count();
 cout<<"Number of nodes:"<<CRet<<"\n";

SinglyLL <float>obj3;

 obj3.InsertFirst(101.3f);
 obj3.InsertFirst(100.2f);
 obj3.InsertFirst(102.34f);
 obj3.InsertFirst(10.34f);
 obj3.InsertFirst(12.34f);

 obj3.Display();

 int fRet=obj3.Count();
 cout<<"Number of nodes:"<<fRet<<"\n";


    return 0;
}