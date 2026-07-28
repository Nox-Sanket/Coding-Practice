#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        string str;
        cin>>str;

        if(str.front() == str.back()){
            cout<<str<<endl;
        }else{
            str.front() = 'a';
            str.back() ='a';
            cout<<str<<endl;
        }
    }
}