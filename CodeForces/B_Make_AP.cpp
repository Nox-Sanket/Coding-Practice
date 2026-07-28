#include<bits/stdc++.h>
using namespace std;


int main(){
    int loop;
    cin>>loop;

    while(loop--){
      int a,b,c;
      cin>>a>>b>>c;

      bool x=false,y=false,z=false;

      int na = 2*b - c;
      if(na > 0 && na % a == 0) x = true;

      int nc = 2*b - a;
      if(nc > 0 && nc % c == 0) y = true;

      int nb = a + c;
      if(nb % (2*b) == 0) z = true;
      
      if(x || y || z){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
}