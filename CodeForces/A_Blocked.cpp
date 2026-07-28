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

        sort(vs.begin(),vs.end(),[](int a,int b){
            return a>b;
        });

        bool yes = true;

        for(int i=0;i<n-i;i++){
            if(vs[i] == vs[i+1]){
                yes = false;
                break;
            }
        }
        if(yes){
            for(int)
        }

    }
}