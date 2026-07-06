#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long R = s - b * k;

        if (R < 0 || R > n * (k - 1)) {
            cout << -1 << endl ;
            continue;
        }

        vector<long long> a(n, 0);

        a[0] = b * k;

        for (int i = 0; i < n && R > 0; i++) {
            long long take = min(R, k - 1);
            a[i] += take;
            R -= take;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl ;
    }

    return 0;
}