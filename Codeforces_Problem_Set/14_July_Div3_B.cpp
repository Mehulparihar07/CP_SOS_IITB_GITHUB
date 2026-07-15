#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        long long carry = 0;   // books received from the left
        long long prev = 0;    // previous final stack height
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            long long have = a[i] + carry;
            long long need = prev + 1;

            if (have < need) {
                ok = false;
                break;
            }

            carry = have - need; // move all extra books to the right
            prev = need;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}