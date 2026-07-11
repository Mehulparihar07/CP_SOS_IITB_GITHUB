#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> freq;
        map<int,int> mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        for (auto x : mp)
            freq.push_back(x.second);

        sort(freq.begin(), freq.end());

        int m = freq.size();
        int removed = 0;
        int ans = 0;

        int i = 0;

        while (i < m)
        {
            int sz = freq[i];

            int q = m - i;                // alive blocks
            int x = sz - 1;               // delete operations
            int rem = n - removed - x*q;  // remaining elements

            if (rem <= k && (k - rem) % q == 0)
                ans++;

            int cnt = 0;
            while (i < m && freq[i] == sz)
            {
                cnt++;
                i++;
            }

            removed += cnt * sz;
        }

        cout << ans << '\n';
    }

    return 0;
}