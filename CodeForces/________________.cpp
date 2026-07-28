#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin >> loop;

    while(loop--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int open = 0, close = 0;
        for(char ch : str){
            if(ch == '(') open++;
            else close++;
        }

        
        if(open != close){
            cout << "NO\n";
            continue;
        }
      
        stack<char> st;
        for(char ch : str){
            if(!st.empty() && ch == ')' && st.top() == '('){
                st.pop();
            } else {
                st.push(ch);
            }
        }

        
        cout << "YES\n";
    }
}