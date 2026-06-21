#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long p = a + c;     // for changing b
        long long q = 2 * b - c; // for changing a
        long long r = 2 * b - a; // for changing c

        if ((q > 0 && q % a == 0) ||
            (p % (2 * b) == 0) ||
            (r > 0 && r % c == 0))
        {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}