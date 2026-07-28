#include <bits/stdc++.h>
using namespace std;

bool issorted(vector<int>& nums){
    int n =nums.size();

    for(int i=0;i<n-1;i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
};

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        vector<int> vs(n);
        for(int i=0;i<n;i++)cin>>vs[i];

        int count =0;
        if(issorted(vs)){  
            int md=INT_MAX;
            for(int i=0;i<n-1;i++){
                if(md > vs[i+1] - vs[i]){
                    md = vs[i+1] - vs[i];
                }
            }
            count = md/2+1;
        }
        cout<<count<<endl;
    }
}