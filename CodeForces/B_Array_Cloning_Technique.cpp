#include <bits/stdc++.h>
using namespace std;

int main() {

    int loop;
    cin >> loop;

    while (loop--) {
        int n;
        cin >> n;
        vector<int> vs(n);
        for (int &x : vs) cin >> x;

        sort(vs.begin(), vs.end());

       
        int mxfr = 1, fr = 1;
        for (int i = 1; i < n; i++) {
            if (vs[i] == vs[i - 1]) {
                fr++;
            } else {
                mxfr = max(mxfr, fr);
                fr = 1;
            }
        }
        mxfr = max(mxfr, fr);

        int count = 0;
        while (mxfr < n) {
            count++; 
            if (2 * mxfr <= n) {
                count += mxfr;  
                mxfr *= 2;
            } else {
                count += (n - mxfr); 
                mxfr = n;
            }
        }

        cout << count << "\n";
    }
}
