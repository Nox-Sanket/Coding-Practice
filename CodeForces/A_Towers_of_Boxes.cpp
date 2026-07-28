#include<bits/stdc++.h>
using namespace std;

int main(){
    int loop;
    cin>>loop;

    while(loop--)
    {
         int n, m, d;
        cin >> n >> m >> d;

        int height = d / m + 1;
        int towers = (n + height - 1) / height;

        cout << towers << endl;
    }
}
