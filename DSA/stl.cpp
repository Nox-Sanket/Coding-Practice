#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(9);
    q.push(7);
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(16);

    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
        }