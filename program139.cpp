//singly Circular in cpp

#include<iostream>
using namespace std;
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class SinglyLC
{
    public:
    PNODE First;
    PNODE Last;
    int iCount;
       SinglyLC();
       

       void InserFirst(int no);
         void InserLast(int no);
           void InserAtPosition(int no,int iPos);


       void DeleteFirst();
         void DeleteLast();
           void DeleteAtPosition(int iPos);

           void Display();
           //void Count();
};

SinglyLC::SinglyLC()
{
  First=NULL;
  Last=NULL;
  iCount=0;
}

void SinglyLC :: InserFirst(int no)
{
    PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;

    if((First ==NULL) && (Last == NULL))
    {

        First=newn;
        Last=newn;
        Last->next=First;
        iCount++;
    }

    else
    {
        newn->next=First;
        First=newn;
        Last->next=First;
        iCount++;
    }

}

void SinglyLC :: InserLast(int no)
{
PNODE newn =new NODE;

    newn->data=no;
    newn->next=NULL;

    if((First ==NULL) && (Last == NULL))
    {

        First=newn;
        Last=newn;
        Last->next=First;
        iCount++;
    }

    else
    {
       Last->next=newn;
       Last=newn;
       Last->next=First;
        iCount++;
    }
}

void SinglyLC :: InserAtPosition(int no,int iPos)
{

  if((iPos <1)||(iPos>iCount+1))
  {
    return;
  }
  if(iPos==1)
  {
    InserFirst(no);
  }
  else if(iPos== iCount+1)
  {
    InserLast(no);
  }
  else{
    PNODE newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    PNODE temp=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;

    iCount++;
  }
}

void SinglyLC :: DeleteFirst()
{
    if(First == NULL)  //if(iCount ==0)
    {
            return;
    }
    else if(First->next == First)  // if(iCount ==1)
    {
        delete First;
        First=NULL;
        iCount--;
    }
    else
    {
        PNODE temp=First;
        Last->next=First->next;
        First=First->next;
        delete temp;
        iCount--;


    }

}

void SinglyLC :: DeleteLast()
{

if(First == NULL)  //if(iCount ==0)
    {
            return;
    }
    else if(First->next == First)  // if(iCount ==1)
    {
        delete First;
        First=NULL;
        iCount--;
    }
    else
    {
        int iCnt=0;
        PNODE temp=Last;
        PNODE temp1=First;
        while(iCnt!=iCount-1)
        {
            temp1=temp1->next;
            iCnt++;
        }
       temp1->next=First;
       Last=temp1;
        delete temp;
        

        iCount--;
    }

}

void SinglyLC :: DeleteAtPosition(int iPos)
{
    if((iPos <1)||(iPos>iCount+1))
  {
    return;
  }
  if(iPos==1)
  {
    DeleteFirst();
  }
  else if(iPos== iCount+1)
  {
    DeleteLast();
  }
  else{
    

    
    PNODE temp1=First;
    for(int iCnt=1;iCnt< iPos-1;iCnt++)
    {
        temp1=temp1->next;
    }
    PNODE temp2=temp1->next;
    temp1->next=temp2->next;

 delete temp2;

    iCount--;
  }

}

void SinglyLC :: Display()
{

    cout<<"Elements of linked list are:"<<"\n";

    PNODE temp=First;

    
    do
    {
        cout<<"|"<<temp->data<<"|->";
        First=First->next;
    }
    while(First !=Last->next);
    
}

int main()
{

SinglyLC obj1;
//SinglyLL obj2;
cout<<sizeof(obj1)<<"\n";
cout<<"First pointer contains:"<<obj1.First<<"\n";
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.InserFirst(51);
obj1.InserLast(21);
obj1.InserAtPosition(11,2);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.InserFirst(101);
obj1.InserLast(211);
obj1.InserAtPosition(111,4);

obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";

obj1.DeleteAtPosition(2);
obj1.Display();
cout<<"\nNumber of nodes:"<<obj1.iCount<<"\n";


    return 0;
}