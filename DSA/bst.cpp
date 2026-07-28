//============================================================================
// Name        : assign9.cpp
// Author      : Your Name
// Version     : 1.0
// Description : Binary Search Tree operations in C++
//============================================================================

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BST {
public:
    Node *root;

    BST() { root = NULL; }

    Node* insert(Node* root, int val) {
        if (root == NULL) return new Node(val);
        if (val < root->data)
            root->left = insert(root->left, val);
        else if (val > root->data)
            root->right = insert(root->right, val);
        return root;
    }

    void insert(int val) {
        root = insert(root, val);
    }


    void inorder(Node* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(Node* root) {
        if (!root) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root) {
        if (!root) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void BFS(Node* root) {
        if (!root) return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }

    

  
    int height(Node* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    int findMin(Node* root) {
        if (!root) return -1;
        while (root->left)
            root = root->left;
        return root->data;
    }

   
    void mirror(Node* root) {
        if (!root) return;
        swap(root->left, root->right);
        mirror(root->left);
        mirror(root->right);
    }

  
    bool search(Node* root, int val) {
        if (!root) return false;
        if (root->data == val) return true;
        if (val < root->data)
            return search(root->left, val);
        else
            return search(root->right, val);
    }

    void displayAll() {
        cout << "\nInorder   : "; inorder(root);
        cout << "\nPreorder  : "; preorder(root);
        cout << "\nPostorder : "; postorder(root);
        cout << "\nBFS (Level Order): "; BFS(root);
       
        cout << endl;
    }
};

int main() {
    BST bst;
    int ch, val;

    do {
        cout << "\n===== Binary Search Tree Menu =====\n";
        cout << "1. Insert Node\n";
        cout << "2. Display \n";
        cout << "3. Height \n";
        cout << "4.  Minimum Value\n";
        cout << "5. Mirror Tree \n";
        cout << "6. Search for a Value\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                bst.insert(val);
                break;

            case 2:
                bst.displayAll();
                break;

            case 3:
                cout << "Height of tree: " << bst.height(bst.root) << endl;
                break;

            case 4:
                cout << "Minimum value: " << bst.findMin(bst.root) << endl;
                break;

            case 5:
                bst.mirror(bst.root);
                cout << "Tree mirrored.\n";
                break;

            case 6:
                cout << "Enter value to search: ";
                cin >> val;
                cout << (bst.search(bst.root, val) ? "Value found." : "Value not found.") << endl;
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    } while (ch != 0);

    return 0;
}
