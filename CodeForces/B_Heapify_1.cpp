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

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<bool> used(n + 1, false);
        bool ok = true;

        for (int i = 1; i <= n; i++)
        {
            if (used[i]) continue;

            vector<int> pos;
            vector<int> val;

            int cur = i;

            // same simple chain logic
            while (cur <= n && !used[cur])
            {
                used[cur] = true;
                pos.push_back(cur);
                val.push_back(a[cur]);
                cur = 2 * cur;
            }

            sort(pos.begin(), pos.end());
            sort(val.begin(), val.end());

            if (pos != val)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}