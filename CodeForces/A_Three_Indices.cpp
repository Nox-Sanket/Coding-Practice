#include <bits/stdc++.h>
using namespace std;

int main(){
   

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin >> p[i];

        int a=-1,b=-1,c=-1;

        
        for(int j=1;j<n-1;j++){
            
            if(p[j] > p[j-1] || p[j] > p[0]){ 
                
                if(p[j] > p[j+1]){
                    a = j-1;
                    b = j;
                    c = j+1;
                    break;
                }
            }
        }

        if(a != -1){
            cout << "YES\n";
            cout << a+1 << " " << b+1 << " " << c+1 << "\n";
        } else {
            cout << "NO\n";
        }
    }
}
