//============================================================================
// Name        : assign8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class myqueue{
	int queue[100];
	int max;
	int front = 0;
	int rear = 0;
public:
	myqueue(){
		cout<<"enter the size of the queue: ";
		cin>>max;
	}
	void delatfront(){
		if(isempty()){
			cout<<"the queue is empty"<<endl;
			return;
		}
		front = (front+1)%max;
	}
	void delatend(){
		if(isempty()){
					cout<<"the queue is empty"<<endl;
					return;
				}
                if(rear==0){
                    rear = max;
                }
		rear--;
	}
	void insertatfront(){
		if(isfull()){
            cout<<"the queue is full"<<endl;
            return;
        }
        int item;
        cout<<"enter the item data: ";
        cin>>item;
        queue[front] = item;
        if(front==0){
            front = max;
        }
        front--;
	}
	void insertatend(){
		 int item;
		if(isfull()){
            cout<<"the queue is full"<<endl;
            return;
        }
        cout<<"enter the iem data: ";
        cin>>item;
        rear = (rear+1)%max;
        queue[rear] = item;
	}
	bool isempty(){
		if(rear == front){
			return 1;
		}
		return 0;
	}
	bool isfull(){
		if((rear+1)%max == front){
			return 1;
		}
		return 0;
	}
	void display(){
		if(isempty()){
			cout<<"the queue is empty"<<endl;
			return;
		}
		int temp = (front+1)%max;
		while(temp != (rear+1)%max){
			cout<<queue[temp]<<" ";
			temp = (temp+1)%max;
		}
		cout<<endl;
	}
};
int main() {
  myqueue m1;
  char ch;
  do{
	  int choice;
	  cout<<"1.add the item at front."<<endl;
	  cout<<"2.add item at the end."<<endl;
	  cout<<"3.delete at front"<<endl;
	  cout<<"4.delete at end."<<endl;
	  cout<<"5.display the queue"<<endl;
	  cout<<"enter the choice: ";
	  cin>>choice;
	  switch(choice){
	  case 1:
		  m1.insertatfront();
	  break;
	  case 2:
		  m1.insertatend();
		  break;
	  case 3:
		  m1.delatfront();
		  break;
	  case 4:
		  m1.delatend();
		  break;
	  case 5:
		  m1.display();
	  }
	  cout<<"enter yes or no: ";
	  cin>>ch;
  }while(ch=='y');
  cout<<"the code is ended"<<endl;
	return 0;
}
