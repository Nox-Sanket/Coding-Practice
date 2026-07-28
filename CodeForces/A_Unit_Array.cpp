#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        vector<int> vs(n);
        int sum =0,prd =1;

        for(int i=0;i<n;i++){
            cin >> vs[i];
            sum += vs[i];
            prd *= vs[i];
        }

        if(prd = 1){
            if(sum >=0){
                cout<<0<<endl;
            }else{
                
            }
        }

    }
}