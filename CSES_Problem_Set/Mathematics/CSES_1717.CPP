#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    long long d1 = 0, d2 = 1;

    for (long long i = 3; i <= n; i++) {
        long long d = ((i - 1) * ((d1 + d2) % MOD)) % MOD;
        d1 = d2;
        d2 = d;
    }

    cout << d2;
    return 0;
}