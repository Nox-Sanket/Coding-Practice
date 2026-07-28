#include <bits/stdc++.h>
using namespace std;

void fun(arr[],n,i)
{
    swap(arr[i],arr[n-i]);
    fun(arr,n,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    fun(arr,9,0);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

}