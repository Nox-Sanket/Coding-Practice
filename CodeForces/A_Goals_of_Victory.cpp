#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        n--;
        vector<int> vs(n);
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>vs[i]; 
            sum+=vs[i];
        }
        cout << -sum <<endl;
    }
}