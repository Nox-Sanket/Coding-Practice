#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long d = 3*p - 2*q;

        if (d == 0) {
            cout << "Bob\n";
        } else if (abs(d) % 5 == 0) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
}