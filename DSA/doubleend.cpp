#inlude<bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val;
        next=prev=NULL;
    }
}

class double
{
    Node* head;
    Node* tail;

    public:
    double()
    {
        head=tail=NULL;
    }

    void insert(int data)
    {
        Node* newNode= new Node(val);

        if(head=NULL)
        {
            head==tail=newNode;
        }else{
            head->prev = newNode;
            newNode->prev=tail;
            newNode->next=head;
            tail->next=newNode;
            head=newNode;
        }
    }

    void delete_front()
    {
        tail->next=head->next;
    }
}