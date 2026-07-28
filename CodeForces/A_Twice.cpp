#include <bits/stdc++.h>

using namespace std;

int main()
{
    int loop;
    cin>>loop;
    while (loop--)
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
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(vs[i]==vs[j]) {
                    count++;break;
                }
            }
        }
        cout<<count<<endl;
    }
    
}