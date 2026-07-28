#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;

        vector<int>vs(n);
        for(int i=0;i<n;i++)cin>>vs[i];

        int len = 0;
        for(int i=0;i<n;i++){
            if(vs[i] ==0){ 
                int ln =0;
                while(vs[i] ==0 && i<n){
                    ln++;
                    i++;
                }
                len = max(len,ln);
            }
        }

        cout<<len<<endl;
    }
}