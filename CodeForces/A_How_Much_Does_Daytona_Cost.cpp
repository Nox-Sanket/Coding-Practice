#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int loop;
    cin>>loop;
    
    while(loop--){
        int n,k;
        cin>>n>>k;
        vector<int> vs(n);
        bool found = false;
        for(int i=0;i<n;i++){
            cin>>vs[i];
            if(vs[i] == k) found =true;
        }
        
        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}