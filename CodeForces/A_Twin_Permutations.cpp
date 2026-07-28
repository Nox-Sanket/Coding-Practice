#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;

        vector<int>vs(n);
        for(int i=0;i<n;i++)cin>>vs[i];

        int val = *max_element(vs.begin(),vs.end())+*min_element(vs.begin(),vs.end());

        for(int &x :vs){
            x = val -x;
        }

        for(int i=0;i<n;i++){
            cout<<vs[i];
            if(i != n-1)cout<<" ";
        }
        cout<<endl;
    }
}