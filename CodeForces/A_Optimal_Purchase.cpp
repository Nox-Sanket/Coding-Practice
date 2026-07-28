#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;
    
    while(loop--){
        int n,a,b;
        cin>>n>>a>>b;
        
        int ans = INT_MAX;
        
        int x = n , y =0;
        while(x >= 0 ){
            int val = x*a + y*b;
            ans = min(ans,val);
            y++;
            x = x - min(x,3);
        }
        cout<<ans<<endl;
    }
}