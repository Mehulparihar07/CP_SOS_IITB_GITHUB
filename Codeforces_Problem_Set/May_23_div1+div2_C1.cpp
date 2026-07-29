#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> ans;
        bool flip = false;

        for (int i = n; i >= 1; i--) {
            long long cur = flip ? -a[i] : a[i];

            if (cur > 0) {
                ans.push_back(i);
                flip = !flip;      // same as flip ^= 1;
            }
        }

        cout << ans.size() << '\n';
        for (int x : ans)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}