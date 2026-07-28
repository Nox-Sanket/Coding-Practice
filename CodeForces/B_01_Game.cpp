#include <bits/stdc++.h>
using namespace std;

int main(){
   int loop;
   cin>>loop;

   while (loop--){
    string str;
    cin>>str;
    int n = str.size();

    int zc = count(str.begin(),str.end(),'0');
    int oc = n - zc;

    int op = min(zc,oc);

    if(op%2 !=0 ){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
    }
   }
   
}
