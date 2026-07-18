#include <bits/stdc++.h>
using namespace std;

long long prefXor(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long x = prefXor(a - 1);

        if (x == b)
            cout << a << '\n';
        else if ((x ^ b) == a)
            cout << a + 2 << '\n';
        else
            cout << a + 1 << '\n';
    }

    return 0;
}