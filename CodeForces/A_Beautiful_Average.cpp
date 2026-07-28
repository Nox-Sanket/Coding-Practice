#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int loop;
    cin >>loop;
    while(loop--)
    {
        int n;
        cin>>n;

        vector<int> vs(n);
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>vs[i];
            ans = max(ans,vs[i]);
        }
        cout<<ans<<endl;
    }
}


