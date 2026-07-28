#include<bits/stdc++.h>

using namespace std;
class solution
{
    public:
    int missing(vector<int>& nums,int n)
    {
        int fin=0;
        int fin2=0;
        for(int i = 0 ; i < n-1 ; i++)
        {
            fin = fin ^ nums[i];
            fin2= fin2 ^ (i+1);
        }
        fin2 = fin2^n;
        return fin^fin2;
    }
};

int main()
{
    vector<int> arr ={1,2,3,5};
    solution s;
    cout<<s.missing(arr,5);
    return 0;
}
