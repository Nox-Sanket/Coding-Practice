#include<bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin>>loop;
    
    while(loop--){
        long long n;
        cin >> n;
        int sum = 0;
        vector<int> vs;
        while(n>0)
        {
           vs.push_back(n%10);
           sum += n%10;
            n = n/10;
        }
        vs.back()--;
        n = vs.size();
        int count = 0;
        sort(vs.begin(),vs.end());
        int i = n-1;
       while(sum >= 10 && i>=0)
       {
            sum -= vs[i];
            count++;
            i--;
       }
        cout<<count<<endl;
    }
}



class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;

        int cn1 = 0, cn2 = 0;
        int l = 0;
        int ans = INT_MAX;

        for(int r = 0; r < 2 * n; r++) {

            // Pattern 010101...
            if(r % 2 == 0) {
                if(t[r] != '0') cn1++;
            } 
            else {
                if(t[r] != '1') cn1++;
            }

            // Pattern 101010...
            if(r % 2 == 0) {
                if(t[r] != '1') cn2++;
            } 
            else {
                if(t[r] != '0') cn2++;
            }

            if(r - l + 1 > n) {

                // Remove left element from counts
                if(l % 2 == 0) {
                    if(t[l] != '0') cn1--;
                } 
                else {
                    if(t[l] != '1') cn1--;
                }

                if(l % 2 == 0) {
                    if(t[l] != '1') cn2--;
                } 
                else {
                    if(t[l] != '0') cn2--;
                }

                l++;
            }

            if(r - l + 1 == n) {
                ans = min(ans, min(cn1, cn2));
            }
        }

        return ans;
    }
};