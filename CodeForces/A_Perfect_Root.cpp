#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;
    while(loop--)
    {
        int n;
        cin>>n;

        for(int i=1;i<=n ;i++)
        {
            cout << i;
            if(i<n)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}