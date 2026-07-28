#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int x,k;
        cin>>x>>k;

        if(x % k ==0){
            cout<<2<<endl;
            cout<< x-1-k <<" "<<k+1<<endl;
        }else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}