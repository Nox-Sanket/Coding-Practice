#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin >> loop;

    while(loop--){
        int a,b,n;
        cin >> a >> b >> n;

        vector<int> vs(n);

        for(int& x : vs) cin >> x;

        sort(vs.begin(), vs.end());

        long long time = 0;

        if(b != 1){
            time += b - 1;
            b = 1;
        }

        for(int i = 0; i < n; i++){
            b += vs[i];
            b = min(b, a);

            if(i == n - 1){
                time += b;
            }else{
                if(b != 1){
                    time += b - 1;
                    b = 1;
                }
            }
        }

        cout << time << endl;
    }
}