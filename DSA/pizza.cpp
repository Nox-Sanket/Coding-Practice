#include <iostream>
#include <deque>
#include <string>
using namespace std;

class PizzaParlor {
private:
    deque<string> orders;  // double-ended queue

public:
    // Add order at rear
    void addOrderRear(const string& order) {
        orders.push_back(order);
        cout << "✅ Added order at rear: " << order << endl;
    }

    // Add order at front (priority)
    void addOrderFront(const string& order) {
        orders.push_front(order);
        cout << "✅ Added PRIORITY order at front: " << order << endl;
    }

    // Process order from front
    void processFront() {
        if (!orders.empty()) {
            cout << "🍽️ Processed order from front: " << orders.front() << endl;
            orders.pop_front();
        } else {
            cout << "⚠️ No orders to process!\n";
        }
    }

    // Process order from rear
    void processRear() {
        if (!orders.empty()) {
            cout << "🍽️ Processed order from rear: " << orders.back() << endl;
            orders.pop_back();
        } else {
            cout << "⚠️ No orders to process!\n";
        }
    }

    // Display orders
    void displayOrders() {
        if (orders.empty()) {
            cout << "📭 No pending orders.\n";
            return;
        }
        cout << "📋 Current pending orders: ";
        for (auto& order : orders) {
            cout << order << " ";
        }
        cout << endl;
    }
};

int main() {
    PizzaParlor parlor;
    int choice;
    string order;

    do {
        cout << "\n====== 🍕 Pizza Parlor Menu ======\n";
        cout << "1. Add Order at Rear\n";
        cout << "2. Add Order at Front (Priority)\n";
        cout << "3. Process Order from Front\n";
        cout << "4. Process Order from Rear\n";
        cout << "5. Display Pending Orders\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter order name: ";
                cin >> order;
                parlor.addOrderRear(order);
                break;
            case 2:
                cout << "Enter priority order name: ";
                cin >> order;
                parlor.addOrderFront(order);
                break;
            case 3:
                parlor.processFront();
                break;
            case 4:
                parlor.processRear();
                break;
            case 5:
                parlor.displayOrders();
                break;
            case 6:
                cout << "👋 Exiting Pizza Parlor System. Goodbye!\n";
                break;
            default:
                cout << "⚠️ Invalid choice, try again.\n";
        }
    } while (choice != 6);

    return 0;
}
