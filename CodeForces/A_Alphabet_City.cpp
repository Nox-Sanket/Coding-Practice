#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    long long m;
    cin >> n >> m;

    vector<array<long long,26>> cnt(n);
    array<long long,26> total{};
    total.fill(0);

    for (int i = 0; i < n; i++) {
        cnt[i].fill(0);
        string s;
        cin >> s;
        for (char c : s) {
            cnt[i][c - 'A']++;
            total[c - 'A']++;
        }
    }

    for (int i = 0; i < n; i++) {
        long long k = LLONG_MAX;
        bool ok = true;

        for (int c = 0; c < 26; c++) {
            long long others = total[c] - cnt[i][c];

            if (others == 0) {
                if (cnt[i][c] > 0) {
                    ok = false;
                    break;
                }
                continue;
            }

            long long available = m * others;
            if (available < cnt[i][c]) {
                ok = false;
                break;
            }

            long long max_k = (available - cnt[i][c]) / others;
            k = min(k, max_k);
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            k = min(k, m);   
            cout << k << '\n';
        }
    }
    return 0;
}
