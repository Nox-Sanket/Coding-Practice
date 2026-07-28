#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    int r,l;
    bool found = false;

    for(int i=0;i<n-1;i++){
        if(s[i] > s[i+1]){
            r=i;
            l= i+1;
            found = true;
            break;
        }
    }

    if(found){
        cout<<"YES"<<endl;
        cout<<r<<" "<<l;
    }else{
        cout<<"NO";
    }
}