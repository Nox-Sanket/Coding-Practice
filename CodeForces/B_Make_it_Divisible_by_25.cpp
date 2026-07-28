#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        long long n;
        cin>>n;

        string s = to_string(n);
        n = s.size();

        int a=0,b=0;
        int i=n-1;
        while(i >=0 && s[i] != '0'){
            a++;i--;
        }
        for(int j = i-1;j>=0;j--){
            if(s[j] == '0' || s[j] == '5'){
                break;
            }else{
                a++;
            }
        }

        i=n-1;
        while(i >=0 && s[i] !='5'){
            b++;i--;
        }
        for(int j = i-1;j>=0;j--){
            if(s[j] == '2' || s[j] == '7'){
                break;
            }else{
                b++;
            }
        }

        cout<<min(a,b)<<endl;
    }
}