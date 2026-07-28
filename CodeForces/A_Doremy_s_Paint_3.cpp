#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;

        vector<int> vs(n);
        map<int,int> freq;

        for(int i=0;i<n;i++){
            cin>>vs[i];
            freq[vs[i]]++;
        }

        if(freq.size() >=3){
            cout<<"No"<<endl;
        }else{

           int freq1 = freq.begin()->second;
           int freq2 = freq.rbegin()->second;

           if(freq1 ==freq2){
            cout<<"Yes"<<endl;
           }else if(n%2 ==1 && abs(freq1- freq2) == 1){
            cout<<"Yes"<<endl;
           }else{
            cout<<"No"<<endl;
           }
        } 
    }
}