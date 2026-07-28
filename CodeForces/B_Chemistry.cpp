#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;

        unordered_map<char,int> mpp;
        for(char ch : str){
            mpp[ch]++;
        }
        int odd =0,even =0;
        for(auto& x: mpp){
                if(x.second %2 != 0){
                  odd++;
                }else{
                    even ++;
                }
            }
        n = n-k;
        if(n%2 ==0){
            if(odd ==0){
                if(k%2 != 0){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }else if(even == 0){
                if(k%2 != 0){
                     cout<<"YES"<<endl;
                }else{
                   cout<<"NO"<<endl;
                }
            }else{
                
            }
        }else{

        }
        
        
    }
}