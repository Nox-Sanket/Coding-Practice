#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;

    while(loop--)
    {
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long> en(n);

        for(long long i =0;i<n;i++) cin>>en[i];

        sort(en.begin(),en.end());
        for( long long i=0;i<n;i++)
        {
            if(en[i] <= c)
            {
                if(en[i] < c && k>0)
                {
                    long long val = min(c-en[i],k);
                    en[i]+= val;
                    k -= val;
                }
                c += en[i];
            }
        }
        cout<<c<<endl;
    

    }
}