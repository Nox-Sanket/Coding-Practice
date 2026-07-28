#include <bits/stdc++.h>
using namespace std;


int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n,k;
        cin>>n>>k;
        vector<int> ans;

        vector<pair<int,int>> vs;

        for(int i=0;i<n;i++){
            int x; cin>>x;
            int rem = x%k;
            if(rem ==0)rem =k;
            vs.push_back({rem,i+1});
        }

        sort(vs.begin(), vs.end(), [&](auto &a, auto &b) {
            if (a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });

        for(auto it : vs){
            ans.push_back(it.second);
        }

        for(int i =0;i<n;i++){
            cout<<ans[i];
            if(i != n-1)cout<<" ";    
        }
        cout<<endl;

    }
}