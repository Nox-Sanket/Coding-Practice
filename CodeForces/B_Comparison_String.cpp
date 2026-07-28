#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int  l_s=1,c_s=1;

        for(int i =1;i<n;i++){
            if(s[i] == s[i-1]){
                c_s++;
            }else{
                l_s= max(l_s,c_s);
                c_s=1;
            }
        }
        l_s= max(l_s,c_s);

        cout<<l_s+1<<endl;
    }
}