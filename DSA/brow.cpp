#include <iostream>
#include <string>
using namespace std;

class Browser {
public:
    int page_id;
    string page_desc;
    float time_stamp;
    Browser* next;
    Browser* prev;

    Browser() {
        page_id = 0;
        page_desc = "";
        time_stamp = 0.0;
        next = prev = nullptr;
    }

    void setData() {
        cout << "Enter Page ID: ";
        cin >> page_id;
        cin.ignore();
        cout << "Enter Page Description: ";
        getline(cin, page_desc);
        cout << "Enter Time Stamp (e.g., 12.30): ";
        cin >> time_stamp;
    }
};

class BrowserHistory {
    Browser* head;
    Browser* tail;

public:
    BrowserHistory() {
        head = tail = nullptr;
    }

    void display() {
        if (!head) {
            cout << "History is empty!\n";
            return;
        }
        cout << "\n--- Browser History ---\n";
        Browser* temp = head;
        while (temp) {
            cout << "[" << temp->page_id << "] "
                 << temp->page_desc << " | " << temp->time_stamp << endl;
            temp = temp->next;
        }
    }

    
    void traverse_forward() { display(); } 

    void traverse_backward() {
        if (!tail) {
            cout << "History is empty!\n";
            return;
        }
        cout << "\n--- Browser History (Reverse) ---\n";
        Browser* temp = tail;
        while (temp) {
            cout << "[" << temp->page_id << "] "
                 << temp->page_desc << " | " << temp->time_stamp << endl;
            temp = temp->prev;
        }
    }

    
    void insert_begin() {
        Browser* page = new Browser();
        page->setData();

        if (!head) {
            head = tail = page;
        } else {
            page->next = head;
            head->prev = page;
            head = page;
        }
        cout << "Inserted at beginning.\n";
    }

    void insert_end() {  
        Browser* page = new Browser();
        page->setData();

        if (!head) {
            head = tail = page;
        } else {
            tail->next = page;
            page->prev = tail;
            tail = page;
        }
        cout << "Inserted at end.\n";
    }

    void insert_at_position(int pos) {
        if (pos <= 1 || !head) {
            insert_begin();
            return;
        }
        Browser* page = new Browser();
        page->setData();

        Browser* temp = head;
        int count = 1;
        while (temp && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if (!temp || !temp->next) { 
            insert_end();
            delete page;
            return;
        }
        page->next = temp->next;
        page->prev = temp;
        temp->next->prev = page;
        temp->next = page;
        cout << "Inserted at position " << pos << ".\n";
    }


    void delete_begin() {
        if (!head) {
            cout << "History is empty!\n";
            return;
        }
        Browser* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        cout << "Deleted from beginning: " << temp->page_desc << endl;
        delete temp;
    }

    void delete_end() {  
        if (!tail) {
            cout << "History is empty!\n";
            return;
        }
        Browser* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        cout << "Deleted from end: " << temp->page_desc << endl;
        delete temp;
    }

    void delete_by_value(int id) {
        if (!head) {
            cout << "History is empty!\n";
            return;
        }
        Browser* temp = head;
        while (temp && temp->page_id != id) {
            temp = temp->next;
        }
        if (!temp) {
            cout << "Page not found!\n";
            return;
        }
        if (temp->prev) temp->prev->next = temp->next;
        else head = temp->next;
        if (temp->next) temp->next->prev = temp->prev;
        else tail = temp->prev;
        cout << "Deleted page: " << temp->page_desc << endl;
        delete temp;
    }

    
    void sort_by_page_id() {
        if (!head || !head->next) {
            cout << "Not enough pages to sort!\n";
            return;
        }

        bool swapped;
        do {
            swapped = false;
            Browser* temp = head;

            while (temp && temp->next) {
                if (temp->page_id > temp->next->page_id) {
                    swap(temp->page_id, temp->next->page_id);
                    swap(temp->page_desc, temp->next->page_desc);
                    swap(temp->time_stamp, temp->next->time_stamp);
                    swapped = true;
                }
                temp = temp->next;
            }
        } while (swapped);

        cout << "History sorted by Page ID.\n";
    }
};


int main() {
    BrowserHistory history;
    int choice, pos, id;
    char cont;

    do {
        cout << "\n--- Browser Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n";
        cout << "3. Insert at Position\n4. Delete at Beginning\n";
        cout << "5. Delete at End\n6. Delete by ID\n";
        cout << "7. Display History\n8. Traverse Backward\n";
        cout << "9. Sort by Page ID\n10. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:{
                    char more;
                    do {
                    history.insert_begin();
                    cout << "Insert another at Beginning? (y/n): ";
                    cin >> more;
                } while (more == 'y' || more == 'Y');
                break;
            }
            case 2:{
             history.insert_end(); break;
            }
            case 3:{
                cout << "Enter Position: ";
                cin >> pos;
                history.insert_at_position(pos);
                break;
            }
            case 4: {
                history.delete_begin(); 
                break;
            }
            case 5:{ history.delete_end(); break;
            }
            case 6:{
                cout << "Enter Page ID to delete: ";
                cin >> id;
                history.delete_by_value(id);
                break;
            }
            case 7:{ history.display(); break;
            }
            case 8: {history.traverse_backward(); break;
            }
            case 9: {history.sort_by_page_id(); break;
            }
            case 10:{
                cout << "Exiting...\n";
                return 0;
            }
            default: {
                cout << "Invalid choice!\n";
            }
        }

        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Program Ended.\n";
    return 0;
}
