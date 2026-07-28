#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n ;
        cin>>n;
        vector<int> vs(n);

        for(int& x:vs)cin>>x;

        for(int& x: vs){
            if(x==1)x++;
        }

        for(int i=0;i<n-1;i++){
            if(vs[i+1]%vs[i] == 0){
                vs[i+1]++;
            }
        }

        for(int i =0;i<n;i++){
            cout<<vs[i];
            if(i!= n-1){cout<<" ";}
        }
        cout<<endl;
    }
}