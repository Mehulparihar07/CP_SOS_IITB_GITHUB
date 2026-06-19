#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long r = n % 12;

        if (r <= 9) {
            cout << r << " " << n - r << '\n';
        }
        else if (r == 11) {
            cout << 11 << " " << n - 11 << '\n';
        }
        else { // r == 10
            if (n >= 22) {
                cout << 22 << " " << n - 22 << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}