#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        vector<int> am(2 * n + 1, 0);
        vector<int> bm(2 * n + 1, 0);

        int len = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                len++;
            } else {
                am[a[i - 1]] = max(am[a[i - 1]], len);
                len = 1;
            }
        }
        am[a[n - 1]] = max(am[a[n - 1]], len);

        len = 1;

        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                len++;
            } else {
                bm[b[i - 1]] = max(bm[b[i - 1]], len);
                len = 1;
            }
        }
        bm[b[n - 1]] = max(bm[b[n - 1]], len);

        int ans = 0;

        for (int x = 1; x <= 2 * n; x++) {
            ans = max(ans, am[x] + bm[x]);
        }

        cout << ans << '\n';
    }

    return 0;
}