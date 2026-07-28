#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin >>loop;

    while(loop--)
    {
        int n;
        cin >> n;
        vector<int> vs;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            vs.push_back(t);
        }
        bool sort = true;

        for(int i=0;i<n-1;i++)
        {
            if(vs[i] > vs[i+1])
            {
                sort = !sort;
                break;
            }
        }
        if(sort)
        {
            cout<<vs.size()<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}