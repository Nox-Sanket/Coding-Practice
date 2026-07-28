#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    vector<int> scores = {g, c, l};
    sort(scores.begin(), scores.end());
    if ( scores[2] - scores[0]>= 10)
        cout << "check again";
    else {  
        cout << "final " << scores[1];
    }
    return 0;
}
