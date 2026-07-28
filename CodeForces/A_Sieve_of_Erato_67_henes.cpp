#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin >> loop;
    while(loop--)
    {
        int n;
        cin>>n;
        bool ok = false;
        for(int i = 0;i<n;i++)
        {
            int t ;
            cin>>t;
            if(t == 67) ok = !ok;
        }
        if(ok){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}