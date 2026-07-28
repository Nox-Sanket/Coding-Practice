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
        vector<int> vs;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            vs.push_back(t);
        }
        int mx=INT_MIN,count = 0;
        for(int x : vs)
        {
            if(x > mx)
            {
                mx = x;
                count =1;
            }else if(x == mx)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}