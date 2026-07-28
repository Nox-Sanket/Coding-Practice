#include <bits/stdc++.h>
using namespace std;

int main() {
    int loop;
    cin >> loop;

    while (loop--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long min_sum = (k * (k + 1)) / 2;
        long long max_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

        cout << (x >= min_sum && x <= max_sum ? "YES" : "NO") << endl;
    }
}