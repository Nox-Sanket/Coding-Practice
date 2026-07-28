#include<bits/stdc++.h>
using namespace std;

int main(){
    long long loop;
    cin>>loop;

    while(loop--){
        long long n;
        long long mxlen = 0,count =0;
        cin>>n;

        for(long long i =1;i<=n;i++){
            if(n%i ==0){
                count++;
            }else{
                mxlen = max(mxlen,count);
                count =0;
            }
        }
        mxlen = max(mxlen, count);
        cout<<mxlen<<endl;

    }
}