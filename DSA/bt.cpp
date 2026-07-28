//============================================================================
// Name        : assign10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class Node{
public:
	int data;
	Node *left;
	Node *right;
	Node(int val){
		data = val;
		left=right = NULL;
	}
	friend class BST;
};
class BST{
public:
	Node *root = NULL;
	BST(){
		root = NULL;
	}
	Node *create(){
		int val;
	    cout<<"enter the val: ";
	    cin>>val;
	    Node *newnode = new Node(val);
	    if(root==NULL){
			root = newnode;
			return root;
		}
		Node *temp = root;
		Node *parent = root;
        while(temp){
			parent = temp;
			if(temp->data>val){
				temp = temp->left;
			}
			else{
				temp = temp->right;
			}
		}
//		temp = newnode;
		if(parent->data>val){
			parent->left = newnode;
		}
		else{
			parent->right = newnode;
		}
		return root;
	}
	Node *createrec(Node* root,int val){
		if(!root){
			return new Node(val);
		}
		if(val<root->data){
			root->left = createrec(root->left,val);
		}
		else{
			root->right = createrec(root->right,val);
		}
		return root;
	}
	void inorder(Node *root){
		if(root==NULL){
			return;
		}
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
     	void preorder(Node *root){
		if(root==NULL){
			return;
		}
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
	void postorder(Node *root){
		if(root==NULL){
			return;
		}
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
	void BFS(Node *root){
		Node *temp = root;
		queue<Node*> q;
		while(temp){
			cout<<temp->data<<" ";
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
			if(q.empty()) return;
			temp = q.front();
			q.pop();
		}
	}
	void inwrec(Node *root){
	 		stack<Node *> st;
	 		Node *current = root;
	         while(current || !st.empty()){
	 			while(current!=NULL){
	 				st.push(current);
	 				current = current->left;
	 			}
	 			current = st.top();
	 			st.pop();
	 			cout<<current->data<<" ";
	 			current = current->right;
	 		}
	 	}
	 	void prewrec(Node *root){
	 		stack<Node *> st;
	 		st.push(root);
	 		 while (!st.empty()) {
	         Node* curr = st.top();
	         st.pop();
	//          Visit the node
	         cout << curr->data << " ";
	//          Push right first, so left is processed first
	         if (curr->right) st.push(curr->right);
	         if (curr->left) st.push(curr->left);
	     }
	 	}
	 	void postwrec(Node *root){
	 		stack<Node *> st1;
	 		stack<Node *> st2;
	 		st1.push(root);
	 		while(!st1.empty()){
	 			Node *curr = st1.top();
	 			st1.pop();
	 			st2.push(curr);
	 			if(curr->left) st1.push(curr->left);
	 			if(curr->right) st1.push(curr->right);
	 		}
	 		while(!st2.empty()){
	 			cout<<st2.top()->data<<" ";
	 			st2.pop();
	 		}
	 	}
	 	int height(Node *root){
	 		if(!root) return 0;
	 		return 1+max(height(root->left),height(root->right));
	 	}
	 	void degree(int val,Node *root){
	 		int count = 0;
	 		Node *temp = root;
	 		while(temp && temp->data!=val){
	 			if(temp->data<val){
	 				temp = temp->right;
	 			}
	 			else{
	 				temp = temp->left;
	 			}
	 		}
	 		if(!temp){
	 			cout<<"the node does not exists"<<endl;
	 		}
	 		if(temp->left) count++;
	 		if(temp->right) count++;
	 		cout<<"the degree of the node with val "<<val<<" is: "<<count<<endl;
	 	}
	 	Node *mirror(Node *root){
	 		queue<Node*> q;
	 		Node *newroot = new Node(root->data);
	 		stack<Node*> st1;
	 		st1.push(root);
	 		stack<Node*> st2;
	 		st2.push(newroot);
	 		while(!st1.empty()){
	 			Node *temporg = st1.top();
	 			st1.pop();
	 			Node *tempmirr = st2.top();
	 			st2.pop();
	 			if(temporg->right){
	 				tempmirr->left = new Node(temporg->right->data);
	 				st1.push(temporg->right);
	 				st2.push(tempmirr->left);
	 			}
	 			if(temporg->left){
	 				tempmirr->right = new Node(temporg->left->data);
	 				st1.push(temporg->left);
	 				st2.push(tempmirr->right);
	 			}
	 		}
	 		return newroot;
	 	}
	 	void search(Node *root,int val){
	 		Node *temp = root;
	 		while(temp){
	 			if(temp->data==val){
	 				cout<<"the node with val "<<val<<" is found"<<endl;
	 				return;
	 			}
	 			else if(temp->data<val){
	 				temp = temp->right;
	 			}
	 			else{
	 				temp = temp->left;
	 			}
	 		}
	 		cout<<"the node is not found!!"<<endl;
	 	}
	 	void max_val(Node *root){
	 		Node *temp=root;
	 		Node *prev = temp;
	 		while(temp){
	 			prev = temp;
	 			temp = temp->right;
	 		}
          cout<<"the maximum value of a node is: "<<prev->data<<endl;
	 	}
	 	void min_val(Node *root){
	 		 Node *temp=root;
	 		 Node *prev = temp;
	 		 while(temp){
	 		 	prev = temp;
	 		 	temp = temp->left;
	 		 }
	 	     cout<<"the minimum value of a node is: "<<prev->data<<endl;
	 	}



};

int main() {
	BST b1;
	Node *root= NULL;
    char ch;
  do{
	  int choice;
	  cout<<"1.Create binary Tree without recursion."<<endl;
	  cout<<"2.create the binary  tree with recursion."<<endl;
	  cout<<"3.Inorder traversal"<<endl;
	  cout<<"4.postorder traversal"<<endl;
	  cout<<"5.preorder traversal"<<endl;
	  cout<<"6.height of the tree"<<endl;
	  cout<<"7.degee of a node"<<endl;
	  cout<<"8.level wise oder traversal(BFS)"<<endl;
	  cout<<"9.search a node in the bst"<<endl;
	  cout<<"10.minimum val"<<endl;
	  cout<<"11.maximum val"<<endl;
	  cout<<"12.mirror image of the tree"<<endl;
	  cout<<"enter the choice: ";
	  cin>>choice;
	  switch(choice){
	  case 1:
		 root = b1.create();
	  break;
	  case 2:
		  int x;
		  cout<<"enter the value of the node: ";
		  cin>>x;
		  root = b1.createrec(root,x);
		  break;
	  case 3:
		  cout<<"INORDER with recursion: ";
		b1.inorder(root);
		cout<<endl;
		cout<<"INORDER without recursion: ";
		b1.inwrec(root);
		cout<<endl;
		  break;
	  case 4:
		  cout<<"POSTORDER with recursion: ";
		b1.postorder(root);
		cout<<endl;
		cout<<"POSTORDER without recursion: ";
		b1.postwrec(root);
		cout<<endl;
		  break;
	  case 5:
		  cout<<"PREORDER with recursion: ";
		  b1.preorder(root);
		  cout<<endl;
		  cout<<"PREORDER without recursion: ";
		  b1.prewrec(root);
		  cout<<endl;
		  break;
	  case 6:
		 cout<<"the height is: "<<b1.height(root)<<endl;
		 break;
	  case 7:
		  int val;
		  cout<<"enter the node of which degree is to be known: ";
		  cin>>val;
		  b1.degree(val,root);
		  break;
	  case 8:
		  cout<<"level wise order: ";
		  b1.BFS(root);
		  cout<<endl;
		  break;
	  case 9:
		  int num;
		  cout<<"enter the node val to be searched: ";
		  cin>>num;
		  b1.search(root,num);
		  break;
	  case 10:
		  b1.min_val(root);
		  break;
	  case 11:
		  b1.max_val(root);
		  break;
	  case 12:
		  Node *newroot = b1.mirror(root);
		  cout<<"POSTORDER with recursion: ";
		  b1.postorder(newroot);
		  cout<<endl;
		  cout<<"INORDER with recursion: ";
		  b1.inorder(newroot);
		  cout<<endl;
		  cout<<"PREORDER with recursion: ";
		  b1.preorder(newroot);
		  cout<<endl;
		  cout<<"level wise order: ";
		  b1.BFS(newroot);
		  cout<<endl;
	  }
	  cout<<"enter yes or no: ";
	  cin>>ch;
  }while(ch=='y');
  cout<<"the code is ended"<<endl;
	return 0;
}
