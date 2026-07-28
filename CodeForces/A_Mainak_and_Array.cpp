#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;
    
    while(loop--){
        int n;
        cin>>n;
        vector<int> vs(n);
        
        for(int& x: vs)cin>>x;
        
        int ans = vs[n-1]-vs[0];

        for(int i=1;i<n;i++){
            ans = max(ans, vs[n-1]-vs[i]);
        }

        for(int i=n-1;i>0;i--){
            ans = max(ans, vs[i]-vs[0]);
        }

        for(int i=0;i<n-1;i++){
            ans = max(ans, vs[i]-vs[i+1]);
        }
        

        cout<<ans<<endl;
    }
}