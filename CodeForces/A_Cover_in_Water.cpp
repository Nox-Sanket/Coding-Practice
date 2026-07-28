#include<bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int total=0;
        int ml = 0;
        for(int i=0;i<n;i++){
            int l=0;
            if(s[i] =='.'){
                while(s[i] == '.'){
                    total++;
                    l++;
                    i++;
                }
                ml = max(ml,l);
            }
        }
        if(ml >= 3){
            cout<<2<<endl;
        }else{
            cout<<total<<endl;
        }
    }
}