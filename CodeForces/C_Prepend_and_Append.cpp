#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;


    while(loop--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i=0,j=n-1;
        while(i<=j && str[i] != str[j]){
            i++;
            j--;
        }
        cout<<j-i+1<<endl;
    }
}