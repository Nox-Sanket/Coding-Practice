#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b>d){
            cout<<-1<<endl;
        }else{
            int ans =0;
            while(b != d){
                a++;
                b++;
                ans++;
            }
            
            if(a < c){
                cout<<-1<<endl;
            }else{
                while(a!=c){
                    a--;
                    ans++;
                }
                cout<<ans<<endl;
            }
            
        }
    }
}