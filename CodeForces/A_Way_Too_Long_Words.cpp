#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.size()>10)
        {
            string c="";
            c = s[0] + to_string(s.size()-2)+s[s.size()-1];
            s=c;
        }
        cout<<s<<endl;
    } 

    return 0;
}
    