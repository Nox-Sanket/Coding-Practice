#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n,ev=0;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%2 ==0)ev++;
        }

        int od = n-ev;
        
        if(od%2 ==0){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}