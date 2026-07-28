#include<bits/stdc++.h>
using namespace std;

bool solve(string str,string s){
    set<char>st;

    int n = str.size(),m=s.size();
    if(m>n)return false;
    int i =n-1,j =m-1;

    
    while(j >= 0){
        if(i < 0) return false;

        if(s[j] == str[i]){
            i--;
            j--;
        }
        else{
            st.insert(str[i]);
            i--;
        }

        if(j >= 0){
            if(i < 0) return false;
            if(st.count(s[j])) return false;
        }
    }

    return true;
}
int main(){
    int loop;
    cin>>loop;

    while(loop--){
       string str,s;
       cin >>str;
       cin>>s;

       if(solve(str,s)){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       } 
    }
}