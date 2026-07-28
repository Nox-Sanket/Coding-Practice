#include <bits/stdc++.h>
using namespace std;
int main(){
    int loop;
    cin >> loop;
    const long long mod = 676767677;
    while(loop--){
        int n;
        cin >> n;
        vector<int> vs(n);
        for(int &x : vs) cin >> x;
        
        long long ans = 0;
        for(int x : vs)
            if(x != 1) ans = (ans + x) % mod;
        
       
      
        
        int idx = -1;
        for(int i = 0; i < n; i++)
            if(vs[i] == 1) idx = i;
        
       
        if(idx == n-1 || ans==0)ans=(ans+1)%mod;
       
        
        cout << ans << endl;
    }
}