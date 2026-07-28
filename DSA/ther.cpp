#include <iostream>
using namespace std;

class Seat {
public:
    int seatNo;  
    bool booked;  
    Seat* next;
    Seat* prev;

    Seat(int s) {
        seatNo = s;
        booked = false;
        next = prev = nullptr;
    }
};

class Theater {
private:
    int rows, seatsPerRow;
    Seat* head[50];   

public:
    Theater(int m, int n) {
        rows = m;
        seatsPerRow = n;

        for (int i = 0; i < rows; i++) {
            head[i] = nullptr;
            Seat* prevNode = nullptr;

            for (int j = 1; j <= seatsPerRow; j++) {
                Seat* newSeat = new Seat(j);
                if (head[i] == nullptr) {
                    head[i] = newSeat;
                    prevNode = newSeat;
                } else {
                    prevNode->next = newSeat;
                    newSeat->prev = prevNode;
                    prevNode = newSeat;
                }
            }

    
            prevNode->next = head[i];
            head[i]->prev = prevNode;
        }
    }

    
    void displaySeats() {
        cout << "\nAvailable Seats:\n";
        for (int i = 0; i < rows; i++) {
            cout << "Row " << i + 1 << ": ";
            Seat* temp = head[i];
            bool anyFree = false;

            if (temp != nullptr) {
                do {
                    if (!temp->booked) {
                        cout << temp->seatNo << " ";
                        anyFree = true;
                    }
                    temp = temp->next;
                } while (temp != head[i]);
            }

            if (!anyFree) cout << "No seats available";
            cout << endl;
        }
    }

    // Book a seat
    void bookSeat(int row, int seat) {
        if (row < 1 || row > rows) {
            cout << "Invalid row!\n";
            return;
        }
        Seat* temp = head[row - 1];
        do {
            if (temp->seatNo == seat) {
                if (temp->booked) {
                    cout << "Seat already booked!\n";
                } else {
                    temp->booked = true;
                    cout << "Seat " << seat << " in Row " << row << " booked successfully!\n";
                }
                return;
            }
            temp = temp->next;
        } while (temp != head[row - 1]);
        cout << "Invalid seat number!\n";
    }

    // Cancel booking
    void cancelSeat(int row, int seat) {
        if (row < 1 || row > rows) {
            cout << "Invalid row!\n";
            return;
        }
        Seat* temp = head[row - 1];
        do {
            if (temp->seatNo == seat) {
                if (!temp->booked) {
                    cout << "Seat is not booked!\n";
                } else {
                    temp->booked = false;
                    cout << "Booking for Seat " << seat << " in Row " << row << " cancelled successfully!\n";
                }
                return;
            }
            temp = temp->next;
        } while (temp != head[row - 1]);
        cout << "Invalid seat number!\n";
    }
};

int main() {
    int M, N;
    cout << "Enter number of rows: ";
    cin >> M;
    cout << "Enter number of seats per row: ";
    cin >> N;

    Theater inox(M, N);

    int choice, row, seat;
    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Display Available Seats\n";
        cout << "2. Book a Seat\n";
        cout << "3. Cancel Booking\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inox.displaySeats();
            break;
        case 2:
            cout << "Enter row and seat to book: ";
            cin >> row >> seat;
            inox.bookSeat(row, seat);
            break;
        case 3:
            cout << "Enter row and seat to cancel: ";
            cin >> row >> seat;
            inox.cancelSeat(row, seat);
            break;
        case 4:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
