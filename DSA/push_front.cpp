#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
    List()
    {
        head=tail=NULL;
    }

    void push_front(int val)
    {
        Node* newNode= new Node(val);
        if(head == NULL)
        {
            head=tail=newNode;
            return;
        }else
        {
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val)
    {
        Node* newNode = new Node( val);
        if(tail == NULL)
        {
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }

    }
    void pop_front()
    {
        if(head ==NULL) return;
        Node* temp=head;
        head = head->next;
        delete temp;

    }

     void pop_back()
    {
      if(head == NULL) return;

      if(head == tail )
      {
        delete head;
        tail=head =NULL;
        return;
      }

      Node* temp =head;
      while(temp->next != tail)
      {
        temp=temp->next;
      }

      delete tail;
      tail=temp;
      temp->next=NULL;
      
    }

    void insert(int val, int pos)
    {
        Node* newNode=new Node(val);
        if(pos==1)
        {
            newNode->next=head;
            head=newNode;
            if(tail==NULL)
            {tail=newnode;}
            return;
        }
        int n=1;
        Node* temp=head;
        while(n != pos-1 && temp->next != NULL )
        {
            temp=temp->next;
            n++;
        }

        if( temp == NULL)
        {
            cout<<Invalid;
            delete newNode;
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        if(newNode == NULL)
        {
            tail=newNode;
        }
    }
    void reverse()
    {
        Node* curr;
        Node* temp=head;
        while(temp->next != NULL)
        {
            
        }
    }

    void print()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<< temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    List l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    
    l.print();
    l.push_front(40);
    l.push_back(50);
    l.print();
    l.pop_front();
    l.pop_back();
    
    l.print();
}