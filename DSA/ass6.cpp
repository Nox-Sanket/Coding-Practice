#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int PRN;
    string name;
    Node* next;

    Node(int p, string n) {
        PRN = p;
        name = n;
        next = NULL;
    }
};

class Club {
    Node* head;  
public:
    Club() {
        head = NULL;
    }

    void addPresident(int prn, string name) {
        if (head != NULL) {
            cout << "President already exists!" << endl;
            return;
        }
        head = new Node(prn, name);
        cout << "President added successfully.\n";
    }

    void addSecretary(int prn, string name) {
        if (head == NULL) {
            cout << "Add president first!\n";
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Node(prn, name);
        cout << "Secretary added successfully.\n";
    }

    void addMember(int prn, string name) {
        if (head == NULL) {
            cout << "Add president first!\n";
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        Node* newNode = new Node(prn, name);
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Member added successfully.\n";
    }

    void display() {
        if (head == NULL) {
            cout << "Club is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "\nClub Members:\n";
        cout << "-------------------------\n";
        cout << "President -> " << temp->PRN << " " << temp->name << endl;
        temp = temp->next;

        while (temp->next != NULL) {
            cout << "Member    -> " << temp->PRN << " " << temp->name << endl;
            temp = temp->next;
        }
        cout << "Secretary -> " << temp->PRN << " " << temp->name << endl;
        cout << "-------------------------\n";
    }

    void deleteMember(int prn) {
        if (head == NULL) {
            cout << "Club is empty.\n";
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        if (head->PRN == prn) {
            cout << "President cannot be deleted!\n";
            return;
        }

        while (temp != NULL && temp->PRN != prn) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Member not found!\n";
            return;
        }

        if (temp->next == NULL) {
            cout << "Secretary cannot be deleted!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Member deleted successfully.\n";
    }

    int countMembers() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void concatenate(Club &c2) {
        if (head == NULL) {
            head = c2.head;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = c2.head;  
    }
};

int main() {
    Club c1, c2;

    
    c1.addPresident(101, "Alice");
    c1.addMember(102, "Bob");
    c1.addSecretary(103, "Charlie");
    c1.display();
    cout << "Total Members in Club 1: " << c1.countMembers() << endl;

    
    c2.addPresident(201, "David");
    c2.addMember(202, "Eve");
    c2.addSecretary(203, "Frank");
    c2.display();
    cout << "Total Members in Club 2: " << c2.countMembers() << endl;

    cout << "\nAfter Concatenation:\n";
    c1.concatenate(c2);
    c1.display();
    cout << "Total Members in Combined Club: " << c1.countMembers() << endl;

    return 0;
}
