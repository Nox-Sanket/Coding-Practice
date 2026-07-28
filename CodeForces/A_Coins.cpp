#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        long long n,k;
        cin>>n>>k;

        if(n%2 ==0||(n-k)%2 ==0){
            cout<<"YES"<<endl;
        }else{    
            cout<<"NO"<<endl;
        }
    }
}