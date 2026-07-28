#include <iostream>
using namespace std;

int harshf(int n);
class Harsh {
public:
    int arr[10];

    Harsh() {
        for (int i = 0; i < 10; i++) {
            arr[i] = -1;
        }
    }

    void insert(int key) {
        int ind = harshf(key);
        int start = ind;

        do {
            if (arr[ind] == -1) {
                arr[ind] = key;
                cout << "Inserted at index: " << ind << "\n";
                return;
                } else if (arr[ind] == key) {
                cout << "Already inserted in array.\n";
                return;
            }
            ind = (ind + 1) % 10;
        } while (ind != start);

        cout << "Array is full, cannot insert.\n";
    }

    void display() {
        cout << "Array contents:\n";
        for (int i = 0; i < 10; i++) {
            cout << i << ": " << arr[i] << endl;
        }
    }

    void search(int m) {
        for (int j = 0; j < 10; j++) {
            if (arr[j] == m) {
                cout << "Element found at index: " << j << "\n";
                
                break;
            }
        }
       
    }
};

int main() {
    Harsh h;
    int choice, repeat;

    do {
        cout << "\n1. Insert element\n2. Display\n3. Search\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int again;
                do {
                    int p;
                    cout << "Enter the element: ";
                    cin >> p;
                    h.insert(p);
                    cout << "Press 1 to insert again: ";
                    cin >> again;
                } while (again == 1);
                break;
            }

            case 2:
			{
                h.display();
                break;
			}
            case 3: {
                int sr;
                cout << "Enter the element to search: ";
                cin >> sr;
                h.search(sr);
                break;
            }

            default:
                cout << "Invalid choice.\n";
        }

        cout << "Press 1 to continue: ";
        cin >> repeat;
    } while (repeat == 1);

    return 0;
}
int harshf(int n)
{
	return n%10;
}
