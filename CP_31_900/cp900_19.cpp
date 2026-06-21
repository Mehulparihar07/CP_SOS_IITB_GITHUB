#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x0, n;
        cin >> x0 >> n;

        long long ans;

        if (x0 % 2 == 0) {
            if (n % 4 == 0) ans = x0;
            else if (n % 4 == 1) ans = x0 - n;
            else if (n % 4 == 2) ans = x0 + 1;
            else ans = x0 + n + 1;
        } else {
            if (n % 4 == 0) ans = x0;
            else if (n % 4 == 1) ans = x0 + n;
            else if (n % 4 == 2) ans = x0 - 1;
            else ans = x0 - n - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}