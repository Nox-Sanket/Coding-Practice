#include <bits/stdc++.h>
using namespace std;

int main() {

    int loop;
    cin >> loop;

    while(loop--){
        long long n ;
        cin>>n;

        
        if(n%2 !=  0){
            cout<<"YES"<<endl;
        }else{
            if((n&(n-1)) == 0){
                cout<<"NO"<<endl;
            }else{
              cout<<"YES"<<endl;  
            }
        }
    }
}
