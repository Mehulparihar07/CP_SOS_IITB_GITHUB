#include<iostream>
#include<vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        long long n, q;
        cin >> n >> q;

        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);

        long long total = 0;

        // input + prefix sum
        for (long long i = 1; i <= n; i++) {

            cin >> a[i];

            total += a[i];

            prefix[i] = prefix[i - 1] + a[i];
        }

        while (q--) {

            long long l, r, k;
            cin >> l >> r >> k;

            // old sum of segment [l...r]
            long long oldSegment =
                prefix[r] - prefix[l - 1];

            // new sum after replacement
            long long newSum =
                total
                - oldSegment
                + (r - l + 1) * k;

            if (newSum % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}