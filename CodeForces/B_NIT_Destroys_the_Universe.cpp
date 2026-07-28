#include <bits/stdc++.h>
using namespace std;


int main(){

    int loop;
    cin>>loop;

    while(loop--){
        int n;
        cin>>n;

        vector<int> vs(n);
        for(int &x:vs)cin>>x;

        int zero = count(vs.begin(),vs.end(),0);

        bool found =false;
        int left = 0,right = n-1;

        while(vs[left] == 0){
            left++;
        }
        while(vs[right]==0){
            right--;
        }

        for(int i =left ; i<= right;i++){
            if(vs[i] ==0)found = true;
        }

        if(zero ==n){
            cout<<0<<endl;
        }else if(found == false){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
}