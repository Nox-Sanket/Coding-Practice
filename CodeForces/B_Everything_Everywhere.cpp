#include <bits/stdc++.h>
using namespace std;

int main(){
   
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for(auto &x : p) cin >> x;
        
        long long ans = 0;
        for(int i = 0; i + 1 < n; i++) {
            int a = p[i], b = p[i+1];
            int d = abs(a - b);
            if(__gcd(a, b) == d) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}