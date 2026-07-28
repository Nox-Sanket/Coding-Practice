#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin >> loop;

    while(loop--){
        long long n;
        cin >> n;
        vector<int> vs(n);
        long long totalTwo = 0;

        for(int i=0; i<n; i++){
            cin >> vs[i];
            if(vs[i] == 2) totalTwo++;
        }

        long long curTwo = 0;
        long ans = -1;

        for(int i=0; i<n; i++){
            if(vs[i] == 2) {
                curTwo++;
                totalTwo--;
            } 

            if(curTwo == totalTwo){
                ans = i+1; 
                break;
            }
        }
        cout << ans << endl;
    }
}
