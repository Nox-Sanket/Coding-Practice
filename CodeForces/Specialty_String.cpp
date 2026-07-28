#include <bits/stdc++.h>
using namespace std;

int main()
{
    int loop;
    cin >> loop;

    while (loop--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;

        for (char ch : s)
        {
            if (!st.empty() && ch == st.top()) 
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }

        if (st.empty())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}