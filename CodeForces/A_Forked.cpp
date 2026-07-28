#include <bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin >> loop;

    while(loop--){
        int a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<vector<int>> king = {
            {xk+a, yk+b}, {xk-a, yk+b}, {xk+a, yk-b}, {xk-a, yk-b},
            {xk+b, yk+a}, {xk-b, yk+a}, {xk+b, yk-a}, {xk-b, yk-a}
        };

        vector<vector<int>> queen = {
            {xq+a, yq+b}, {xq-a, yq+b}, {xq+a, yq-b}, {xq-a, yq-b},
            {xq+b, yq+a}, {xq-b, yq+a}, {xq+b, yq-a}, {xq-b, yq-a}
        };

      
        set<pair<int,int>> kingSet, queenSet;
        for(auto &k : king) kingSet.insert({k[0], k[1]});
        for(auto &q : queen) queenSet.insert({q[0], q[1]});

        int count = 0;
        for(auto &pos : kingSet){
            if(queenSet.count(pos)) count++;
        }

        cout << count << endl;
    }
}
