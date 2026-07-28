#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n , k;
        cin>>n>>k;

        vector<int> vs(n);
        for(int i=0;i<n;i++){
            cin>>vs[i];
        }

        sort(vs.begin(),vs.end());

        int maxlen = 1;
        int len =1;
        for(int i =1;i<n;i++){
            if(vs[i]-vs[i-1] <= k){
                len++;
            }else{
                 maxlen = max(maxlen,len);
                len =1;
            }
        }
         maxlen = max(maxlen,len);
    
            cout<<n-maxlen<<endl;
    }
}


		