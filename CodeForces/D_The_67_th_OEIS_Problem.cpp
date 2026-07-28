#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        vector<int> ans(n);

        ans[0]=1;
        ans[1] =7;
        for(int i=2;i<n;i++){
            ans[i] = ans[i-1]*2;
        }
        
        for(int i=0;i<n;i++){
            cout<<ans[i];
            if(i != n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}