#include <bits/stdc++.h>
using namespace std;

int main(){
    long long loop;
    cin>>loop;

    while(loop--){
        long long n ;
        cin>>n;

        if(n%2 == 1 || n< 4){
            cout<<-1<<endl;
        }else{
            cout<< (n+5)/6<<" "<<n/4<<endl;
        }
    }
}