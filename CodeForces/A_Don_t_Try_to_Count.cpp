#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;
    while(loop--){
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;
        bool found = false;

        for(int i = 0; i <= 6; i++){   
            if(x.find(s) != string::npos){
                cout << count << endl;
                found = true;
                break;
            }
            x += x;
            count++;
        }

        if(!found) cout << -1 << endl;
    }
}