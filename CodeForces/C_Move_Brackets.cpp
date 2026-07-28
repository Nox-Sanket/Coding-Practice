#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;
        int ops = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else {
                if (!st.empty()) {
                    st.pop();
                } else {
                    ops++; // imbalance
                }
            }
        }

        cout << ops << "\n";
    }
    return 0;
}
