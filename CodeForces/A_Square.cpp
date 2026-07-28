#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;
    while(loop--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==b && b==c && d==c)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}