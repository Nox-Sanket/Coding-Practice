#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--){
        string s1,s2;
        cin>>s1>>s2;

        set<string>st;

        int n =s1.size() , m = s2.size();

        for(int i =0;i<n;i++){
            string str = "";
            for(int j = i;j<n;j++){
                str += s1[j];
                st.insert(str);
            }
        }

        int ans = INT_MIN;

        for(int i =0;i<m;i++){
            string str = "";
            for(int j = i;j<m;j++){
                str += s2[j];
                if(st.count(str)) {
                    int l = str.size();
                    ans = max(ans,l);
                }
            }
        }

        cout<< n+m - 2*ans<<endl;
    }
}