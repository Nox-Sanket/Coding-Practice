#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;
    do{
        int n;
        cin>>n;
        vector<int> vs(n);
        for(auto& x:vs)
        {
            cin>>x;
        }
        int count=0;
       unordered_map<int,int> mpp;
        for(auto& t : vs)
        {
            mpp[t]++;
        }

        for(auto it = mpp.begin();it != mpp.end() ; it++)
        {
            int x = it->first;
            int fq = it->second;

             if (fq < x){count += fq;
            } else{
                count += (fq - x);
            }
        }
        cout<<count<<endl;
        loop--;
    }while(loop > 0);

}