#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        vector<int> a(n),b,c;

        for(int i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());

        int i =0;
        b.push_back(a[i++]);
        while(i<n && b.back() == a[i]){
            b.push_back(a[i++]);
        }

        for(;i<n;i++){
            c.push_back(a[i]);
        }
        
        if(c.size()>0 && b.size()>0){
            int lb = b.size(),lc = c.size();
            cout<<lb<<" "<<lc<<endl;
            for(int i=0;i<lb;i++){
                cout<<b[i];
                if(i != lb-1){
                    cout<<" ";
                }
            }
            cout<<endl;
            for(int i=0;i<lc;i++){
                cout<<c[i];
                if(i != lc-1){
                    cout<<" ";
                }
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}