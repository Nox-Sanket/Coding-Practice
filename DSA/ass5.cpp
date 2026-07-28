//============================================================================
// Name        : browser_history.cpp
// Author      :
// Version     :
// Description : Browser history using linked list (menu driven)
//============================================================================
#include <iostream>
#include <ctime>
using namespace std;

class History {
private:
    int page_id;
    string timestamp;
    History* next;
    History* prev;
    friend class Browser;

public:
    void setData() {
        cout << "\nEnter Page ID: ";
        cin >> page_id;
        // generate timestamp
        time_t now = time(0);
        timestamp = ctime(&now);
        timestamp.pop_back(); // remove newline
        next = nullptr;
        prev = nullptr;
    }

    void showData() {
        cout << "\nPage ID: " << page_id << "\tVisited at: " << timestamp;
    }
};

class Browser {
    History* head;
    History* tail;
    History* current;
    int count;

public:
    Browser() {
        head = tail = current = nullptr;
        count = 0;
    }

    // 1. Visit a specific web page
    void visitPage() {
        History* newnode = new History;
        newnode->setData();
        count++;
        if (head == nullptr) {
            head = tail = current = newnode;
        } else {
            // add at end
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            current = newnode;
        }
        cout << "Visited Page Successfully!" << endl;
    }

    // 2. Navigate Backward
    void goBack() {
        if (current && current->prev) {
            current = current->prev;
            cout << "Went Back to -> ";
            current->showData();
        } else {
            cout << "No previous page available!" << endl;
        }
    }

    // 2. Navigate Forward
    void goForward() {
        if (current && current->next) {
            current = current->next;
            cout << "Went Forward to -> ";
            current->showData();
        } else {
            cout << "No forward page available!" << endl;
        }
    }

    // 3. Add new web page manually (same as visit)
    void addPage() {
        visitPage();
    }

    // 4. Delete page by ID
    void deletePage() {
        int id;
        cout << "Enter Page ID to delete: ";
        cin >> id;

        History* temp = head;
        while (temp && temp->page_id != id) {
            temp = temp->next;
        }

        if (!temp) {
            cout << "Page ID not found!" << endl;
            return;
        }

        if (temp == head) head = temp->next;
        if (temp == tail) tail = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        if (current == temp) current = temp->prev ? temp->prev : head;

        delete temp;
        count--;
        cout << "Page deleted successfully!" << endl;
    }

    // Display entire history
    void showHistory() {
        cout << "\n--- Browser History ---" << endl;
        History* temp = head;
        while (temp) {
            temp->showData();
            temp = temp->next;
        }
        cout << "\n-----------------------" << endl;
    }
};

int main() {
    Browser b;
    int ch, k;

    do {
        cout << "\n===== Browser History Menu =====";
        cout << "\n1. Visit Page";
        cout << "\n2. Go Back";
        cout << "\n3. Go Forward";
        cout << "\n4. Add New Page";
        cout << "\n5. Delete Page";
        cout << "\n6. Show History";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
        case 1: b.visitPage(); break;
        case 2: b.goBack(); break;
        case 3: b.goForward(); break;
        case 4: b.addPage(); break;
        case 5: b.deletePage(); break;
        case 6: b.showHistory(); break;
        case 7: cout << "Exiting..." << endl; break;
        default: cout << "Invalid choice!" << endl;
        }

        if (ch != 7) {
            cout << "\nPerform again? (1-Yes / 0-No): ";
            cin >> k;
        } else {
            k = 0;
        }

    } while (k == 1);

    return 0;
}
