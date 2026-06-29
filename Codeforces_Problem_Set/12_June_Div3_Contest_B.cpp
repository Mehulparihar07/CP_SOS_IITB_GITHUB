#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool ok = true;

        for (int start = 0; start < k; start++) {
            int xr = 0;

            for (int i = start; i < n; i += k) {
                xr ^= (s[i] - '0');
            }

            if (xr) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}