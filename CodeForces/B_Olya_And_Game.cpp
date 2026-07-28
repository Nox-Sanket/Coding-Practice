#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Start"<<endl;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long ans = 0;
        int ms = INT_MAX; 
        int mo = INT_MAX; 

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            int a = INT_MAX, b = INT_MAX; 
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                if (x < a) {
                    b = a;
                    a = x;
                } else if (x < b) {
                    b = x;
                }
            }
            ans += b;         
            ms = min(ms, b);  
            mo = min(mo, a);   
        }

        cout << ans - ms + mo << "\n";
    }
    return 0;
}
