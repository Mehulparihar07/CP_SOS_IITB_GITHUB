#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll d;
        cin >> d;

        // Find first prime >= d + 1
        ll p = d + 1;
        while (!isPrime(p))
            p++;

        // Find first prime >= p + d
        ll q = p + d;
        while (!isPrime(q))
            q++;

        cout << min(p * p * p, p * q) << "\n";
    }

    return 0;
}