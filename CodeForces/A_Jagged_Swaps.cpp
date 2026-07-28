#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;

        vector<int> vs(n);
        for(int i=0;i<n;i++)cin>>vs[i];

        int mn = min_element(vs.begin(),vs.end()) - vs.begin();
        if(vs[0] == vs[mn]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
