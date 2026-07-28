#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        
        data=val;
        next=NULL;
    }
};

class circular
{
    Node* head;
    Node* tail;
    public:
    circular()
    {
        head=NULL;
        tail=NULL;
    }

    void insert(int val)
    {

        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }else{
            newNode->next=head;
            tail->next=head=newNode;
        }
        
    }

    void display()
    {
        Node* temp=head;

        while(temp->next != head)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};

int main()
{
    circular cl;
    cl.insert(12);
    cl.insert(13);
    cl.insert(14);
    cl.insert(15);
    cl.insert(16);
    cl.insert(17);

    cl.display();
}