#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n,q;
        cin>>n>>q;

        vector<int> vs(n);
        for(int& x:vs)cin>>x;

        long long old_sum =0;
        for(int i = 0 ; i<n;i++){  
            old_sum += vs[i];   
        }

        vector<long long>pref(n+1 ,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+vs[i-1];
        }

        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            
            long long total_sum =  old_sum + (r-l+1)*k +pref[r] - pref[l-1];

            if(total_sum %2 !=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }
    }
}